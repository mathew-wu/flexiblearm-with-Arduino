#include <ros.h> // needed in every ros program
#include <geometry_msgs/Twist.h>  //type of message sent by motor driver

ros::NodeHandle  nh; // instantiate the node handle which will create the publisher node
geoemtry_msgs::Twist msg; //creates the message type twist
ros::Publisher pub("cmd_vel",&msg ); //creates the publisher pub with message type of twist

void setup()
{
  nh.initNode(); //initializes the node
  nh.advertise(pub);
}

void loop()
{
  msg.linear.x = 1 //signal/thing that you want to send
  
  pub.publish(&msg); //sends out the message
  nh.spinOnce();
  delay(1000);
}
