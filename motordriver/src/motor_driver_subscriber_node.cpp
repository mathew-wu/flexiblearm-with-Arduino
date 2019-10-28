#include <ros/ros.h> // header file for basic ROS libraries
#include <geometry_msgs/Twist.h> // For geometry_msgs::Twist
#include <ros/console.h> //alows for logging statements
#include <std_msgs/String.h> // allows the use of rosserial libraries

void twistMessageReceived(const geometry_msgs::Twist::&msg) { //callback function that gets called whenever new information has arrived in the chatter topic.
{
	ROS_INFO_STREAM(msg.linear.x); // this is the msg u will have to adjust
}

int main(int argc, char **argv)
{
ros::init(argc, argv, "motor_driver_node");
ros::NodeHandle nh;
ros::Subscriber sub = nh.subscribe("cmd_vel",1000,twistMessageReceived); // subscribes to the cmd_vel topic and calls the callback function.
ros::spin();

return 0;

