#include <ros/ros.h>
#include <sensor_msgs/Image.h>

#include "feature_tracker.h"


void img_callback(const sensor_msgs::ImageConstPtr &img_msg)
{

}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "feature_tracker");
    ros::NodeHandle n("~");
    readParameters(n);

    ros::Subscriber sub_img = n.subscribe("IMAGE_TOPIC", 100, img_callback);

    ros::spin();
    return 0;



}