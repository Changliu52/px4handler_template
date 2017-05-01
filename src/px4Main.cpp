#include "ros/ros.h"
#include <px4handler/px4handler.h>

//#######################################################
int main(int argc, char **argv)
{
	//_____________________________________
	// ROS node init
	ros::init(argc, argv, "px4handler_node");
	ros::NodeHandle roshandler;
	
	//_____________________________________
	// Main px4 handler init
	px4handler px4(&roshandler);
	
	ros::spin();
	
	return 0;
}