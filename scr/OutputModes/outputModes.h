#ifndef OUTPUTMODES_H
#define OUTPUTMODES_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <filesystem>


using namespace std;
using namespace cv;

void cliOutput(const std::string& outputString);
void fileOutput(const std::string& outputString, const std::string& fileName);
void imageOutput(const std::string& outputString, const std::string& fileName);
std::string getDownloadsPath();
#endif //OUTPUTMODES_H
