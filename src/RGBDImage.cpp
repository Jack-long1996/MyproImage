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
    calibration_img_877 = cv::imread(filename+"first_calibration_image_0.bmp");
    calibration_img_886 = cv::imread(filename+"first_calibration_image_1.bmp");
    calibration_img_869 = cv::imread(filename+"first_calibration_image_2.bmp");
    calibration_img_858 = cv::imread(filename+"first_calibration_image_3.bmp");
    calibration_img_944 = cv::imread(filename+"first_calibration_image_4.bmp");
    calibration_img_783 = cv::imread(filename+"first_calibration_image_5.bmp");
    calibration_img_796 = cv::imread(filename+"first_calibration_image_6.bmp");
    calibration_img_772 = cv::imread(filename+"first_calibration_image_7.bmp");
    calibration_img_758 = cv::imread(filename+"first_calibration_image_8.bmp");
    calibration_img_665 = cv::imread(filename+"first_calibration_image_9.bmp");
    calibration_img_732 = cv::imread(filename+"first_calibration_image_10.bmp");
    calibration_img_746 = cv::imread(filename+"first_calibration_image_11.bmp");
    calibration_img_720 = cv::imread(filename+"first_calibration_image_12.bmp");
    calibration_img_705 = cv::imread(filename+"first_calibration_image_13.bmp");
    calibration_img_680 = cv::imread(filename+"first_calibration_image_14.bmp");
    calibration_img_919 = cv::imread(filename+"first_calibration_image_15.bmp");
    calibration_img_926 = cv::imread(filename+"first_calibration_image_16.bmp");
    calibration_img_910 = cv::imread(filename+"first_calibration_image_17.bmp");
    calibration_img_902 = cv::imread(filename+"first_calibration_image_18.bmp");
    calibration_img_939 = cv::imread(filename+"first_calibration_image_19.bmp");
    calibration_img_837 = cv::imread(filename+"first_calibration_image_20.bmp");
    calibration_img_848 = cv::imread(filename+"first_calibration_image_21.bmp");
    calibration_img_827 = cv::imread(filename+"first_calibration_image_22.bmp");
    calibration_img_815 = cv::imread(filename+"first_calibration_image_23.bmp");
    calibration_img_934 = cv::imread(filename+"first_calibration_image_24.bmp");
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
void RGBDImage::ShowSourceHypeImage(string Wavelength)
{
    if(Wavelength == "877")
    {
        cv::imshow("SourceHypeImage_877nm",calibration_img_877);
        cv::waitKey();
    }
    else if (Wavelength == "886")
    {
        cv::imshow("SourceHypeImage_886nm",calibration_img_886);
        cv::waitKey();
    }
    else if (Wavelength == "869")
    {
        cv::imshow("SourceHypeImage_869nm",calibration_img_869);
        cv::waitKey();
    }
    else if (Wavelength == "858")
    {
        cv::imshow("SourceHypeImage_858nm",calibration_img_858);
        cv::waitKey();
    }
}
