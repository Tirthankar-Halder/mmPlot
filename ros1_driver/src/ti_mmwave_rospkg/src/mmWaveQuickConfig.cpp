#include "ros/ros.h"
#include "ti_mmwave_rospkg/mmWaveCLI.h"
#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <regex>
#include "ParameterParser.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "mmWaveQuickConfig");
    ros::NodeHandle nh;
    ros::NodeHandle private_nh("~");
    ti_mmwave_rospkg::mmWaveCLI srv;
    if (argc != 2) {
        ROS_INFO("mmWaveQuickConfig: usage: mmWaveQuickConfig /file_directory/params.cfg");
        return 1;
    } else 
        ROS_INFO("mmWaveQuickConfig: Configuring mmWave device using config file: %s", argv[1]);
    
    std::string mmWaveCLIName;
    private_nh.getParam("mmWaveCLI_name", mmWaveCLIName);
    ros::ServiceClient client = nh.serviceClient<ti_mmwave_rospkg::mmWaveCLI>(mmWaveCLIName);
    std::ifstream myParams;
    ti_mmwave_rospkg::ParameterParser parser;
    //wait for service to become available
    ros::service::waitForService(mmWaveCLIName, 10000); 
    
    //wait 0.5 secs to avoid multi-sensor conflicts
    ros::Duration(0.5).sleep();

    myParams.open(argv[1]);
    
    if (myParams.is_open()) {
        while( std::getline(myParams, srv.request.comm)) {
        // Remove Windows carriage-return if present
        srv.request.comm.erase(std::remove(srv.request.comm.begin(), srv.request.comm.end(), '\r'), srv.request.comm.end());
        // Ignore comment lines (first non-space char is '%') or blank lines
        if (!(std::regex_match(srv.request.comm, std::regex("^\\s*%.*")) || std::regex_match(srv.request.comm, std::regex("^\\s*")))) {
            // ROS_INFO("mmWaveQuickConfig: Sending command: '%s'", srv.request.comm.c_str() );
            if (client.call(srv)) {
            if (std::regex_search(srv.response.resp, std::regex("Done"))) {
                // ROS_INFO("mmWaveQuickConfig: Command successful (mmWave sensor responded with 'Done')");            
                parser.ParamsParser(srv, nh);
		} else {
	           ROS_INFO("mmWaveQuickConfig: Command failed (mmWave sensor did not respond with 'Done')");
                   ROS_INFO("mmWaveQuickConfig: Response: '%s'", srv.response.resp.c_str() );
		   //return 1;
		}
             } else {
	        ROS_INFO("mmWaveQuickConfig: Failed to call service mmWaveCLI");
                ROS_INFO("%s", srv.request.comm.c_str() );
		// return 1;
             }
        }
        }
        parser.CalParams(nh);
        myParams.close();
    } else {
        ROS_ERROR("mmWaveQuickConfig: Failed to open File %s", argv[1]);
        return 1;
    }
    ROS_INFO("mmWaveQuickConfig: mmWaveQuickConfig will now terminate. Done configuring mmWave device using config file: %s", argv[1]);
    return 0;
}
