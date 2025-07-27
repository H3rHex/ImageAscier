#ifndef OUTPUTMODES_H
#define OUTPUTMODES_H

#include <iostream>
#include <string>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void cliOutput(const std::string& outputString);
void fileOutput(const std::string& outputString);

#endif //OUTPUTMODES_H
