//
// Created by Jack- on 2019/12/1.
//
#include <iostream>
#include <string.h>
#include <opencv2/opencv.hpp>
#include "../include/RGBDImage.h"

using namespace std;
using namespace cv;

RGBDImage::RGBDImage(string filename)
{
    RGBImage = cv::imread(filename+"rgbimage0.png");
    DepthImage = cv::imread(filename+"Depth_0.png",IMREAD_ANYDEPTH);
}

RGBDImage::~RGBDImage()
{

}

void RGBDImage::ShowSourceRGBImage()
{
    cv::imshow("SourceRGBImage",RGBImage);
    cv::waitKey();
}
void RGBDImage::ShowSourceDepthImage()
{
    cv::imshow("SourceDepthImage",DepthImage);
    cv::waitKey();

}
