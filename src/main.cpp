#include <iostream>
#include <include/RGBDImage.h>

int main() {
    RGBDImage rgbdImage("../data/");
    //rgbdImage.ShowSourceRGBImage();
    rgbdImage.ShowSourceDepthImage();
    return 0;
}
