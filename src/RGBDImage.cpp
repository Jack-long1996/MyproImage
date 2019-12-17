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

void RGBDImage::Process()
{
    cv::imshow("RGB_result",rgb_Procession(RGBImage));
    cv::waitKey();
    cv::imshow("HSV_result",hsv_Procession(RGBImage));
    cv::waitKey();
}

cv::Mat RGBDImage::hsv_Procession(cv::Mat color_pic)
{
    //颜色的HSV范围
    int iLowH = 40;
    int iHighH = 80;

    int iLowS = 40;
    int iHighS = 255;

    int iLowV = 40;
    int iHighV = 255;

    cv::Mat HSVimg;
    cv::Mat mask;
    cvtColor(color_pic, HSVimg, COLOR_BGR2HSV);//转为HSV
    cv::Mat imgThresholded;
    cv::inRange(HSVimg, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded);

    //开操作 (去除一些噪点)  如果二值化后图片干扰部分依然很多，增大下面的size
    cv::Mat element = getStructuringElement(MORPH_RECT, Size(3, 3));
    cv::morphologyEx(imgThresholded, imgThresholded, MORPH_OPEN, element);
    //闭操作 (连接一些连通域)
    cv::morphologyEx(imgThresholded, imgThresholded, MORPH_CLOSE, element);
    color_pic.copyTo(mask, imgThresholded);
    return mask;
}

cv::Mat RGBDImage::rgb_Procession(cv::Mat color_pic)
{
    cv::Mat mask;
    cv::Mat gray;
    vector<Mat> channels;
    // 把一个3通道图像转换成3个单通道图像
    cv::split(color_pic, channels);//分离色彩通道
    gray = (1.5* channels.at(1) - channels.at(2) - channels.at(0));
    cv::GaussianBlur(gray, gray, Size(3, 3), 0, 0);
    int thresh = otsu(gray);
    color_pic.copyTo(mask, gray);
    return mask;
}

int RGBDImage::otsu(Mat &img)
{
    float histogram[256] = { 0 };
    for (int i = 0; i<img.rows; i++)
    {
        unsigned char* p = (unsigned char*)img.ptr(i);
        for (int j = 0; j<img.cols; j++)
        {
            histogram[p[j]]++;
        }
    }
    float avgValue = 0;
    int numPixel = img.cols*img.rows;
    for (int i = 0; i<256; i++)
    {
        histogram[i] = histogram[i] / numPixel;
        avgValue += i*histogram[i];
    }
    int threshold = 0;
    float gmax = 0;
    float wk = 0, uk = 0;
    for (int i = 0; i<256; i++) {
        wk += histogram[i];
        uk += i*histogram[i];
        float ut = avgValue*wk - uk;
        float g = ut*ut / (wk*(1 - wk));
        if (g > gmax)
        {
            gmax = g;
            threshold = i;
        }
    }
    return threshold;
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
