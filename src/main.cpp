#include <iostream>
#include <include/RGBDImage.h>

int main() {
    RGBDImage rgbdImage("../data/");
    //rgbdImage.ShowSourceRGBImage();
    //rgbdImage.ShowSourceDepthImage();
    rgbdImage.ShowSourceHypeImage("886");
    return 0;
}
