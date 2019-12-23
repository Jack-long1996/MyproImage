//
// Created by Jack- on 2019/12/1.
//

#ifndef MYPROIMAGE_RGBDIMAGE_H
#define MYPROIMAGE_RGBDIMAGE_H

#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
class RGBDImage{
public:
    RGBDImage(string filename);
    ~RGBDImage();
    void ShowSourceRGBImage();
    void ShowSourceDepthImage();
    void ShowSourceHypeImage(string Wavelength);
    int otsu(Mat &img);
    cv::Mat rgb_Procession(cv::Mat color_pic);
    cv::Mat hsv_Procession(cv::Mat color_pic);
    cv::Mat spectrum_Process(cv::Mat color_pic);
    void Process();

private:
    Mat RGBImage;
    Mat DepthImage;
    Mat calibration_img_877;       //877.940nm
    Mat calibration_img_886;       //886.689nm
    Mat calibration_img_869;       //869.256nm
    Mat calibration_img_858;       //858.490nm
    Mat calibration_img_944;       //944.466nm
    Mat calibration_img_783;       //783.508nm
    Mat calibration_img_796;       //796.428nm
    Mat calibration_img_772;       //772.240nm
    Mat calibration_img_758;       //758.962nm
    Mat calibration_img_665;       //665.883nm
    Mat calibration_img_732;       //732.043nm
    Mat calibration_img_746;       //746.304nm
    Mat calibration_img_720;       //720.119nm
    Mat calibration_img_705;       //705.457nm
    Mat calibration_img_680;       //680.543nm
    Mat calibration_img_919;       //919.833nm
    Mat calibration_img_926;       //926.032nm
    Mat calibration_img_910;       //910.186nm
    Mat calibration_img_902;       //902.089nm
    Mat calibration_img_939;       //939.834nm
    Mat calibration_img_837;       //837.423nm
    Mat calibration_img_848;       //848.456nm
    Mat calibration_img_827;       //827.127nm
    Mat calibration_img_815;       //815.456nm
    Mat calibration_img_934;       //934.769nm
};

#endif //MYPROIMAGE_RGBDIMAGE_H
