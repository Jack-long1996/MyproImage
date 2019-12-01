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
}

RGBDImage::~RGBDImage()
{

}

void RGBDImage::ShowSourceRGBImage()
{
    cv::imshow("SourceRGBImage",RGBImage);
    cv::waitKey();
}
