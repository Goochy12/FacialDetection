// FacialDetection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main()
{
    std::cout << readImage("E:\\UserData\\Documents\\repositories\\FacialDetection\\.datasets\\yalefaces\\yalefaces\\subject01.gif") << std::endl;
    return 0;
}

//read image
std::string readImage(std::string path) {
    std::ifstream image;
    image.open(path);
    std::streamsize file = image.width();
    return (std:string)file;
}

//train

