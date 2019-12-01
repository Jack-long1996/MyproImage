#include <iostream>
#include <include/RGBDImage.h>

int main() {
    RGBDImage rgbdImage("../data/");
    rgbdImage.ShowSourceRGBImage();
    return 0;
}
