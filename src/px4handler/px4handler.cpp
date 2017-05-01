#include <px4handler/px4handler.h>

px4handler::px4handler(ros::NodeHandle* nh)
{
	test_ = Matrix3d::Zero();
	
	rclistener_ = nh->subscribe<mavros_msgs::ManualControl> ("~manual_control/control", 1, &px4handler::rc_cb, this);
}

void px4handler::rc_cb(const mavros_msgs::ManualControl::ConstPtr& msgin)
{
	std::cout<< msgin->x <<std::endl;
}