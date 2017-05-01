#ifndef __PX4HANDLER_H__
#define __PX4HANDLER_H__

#include "ros/ros.h"
#include <sstream>
#include <eigen3/Eigen/Dense>
#include <string>

#include <mavros_msgs/ManualControl.h>

using namespace Eigen;


class px4handler
{
	//_____________________________________
	// PUBLIC variables and function
	public:
	px4handler(ros::NodeHandle* nh);
	
	//_____________________________________
	// PRIVATE variables and function
	private:
	Matrix3d test_;
	//_____________________________________
	// ROS node init
	ros::Subscriber rclistener_;
	ros::Subscriber imulistener_;
	
	void rc_cb(const mavros_msgs::ManualControl::ConstPtr& msgin);
};


#endif