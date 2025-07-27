#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

// INCLUDES
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// thresholds
inline vector<pair<int, char>> thresholds = {
    {255, '@'},
    {224, '#'},
    {208, '8'},
    {192, '&'},
    {176, '%'},
    {160, '$'},
    {144, '*'},
    {128, '+'},
    {112, '='},
    {96,  '-'},
    {80,  ':'},
    {64,  '~'},
    {48,  ','},
    {32,  '.'},
    {16,  '`'},
    {0,   ' '}
};

cv::Mat loadImage(const string& imagePath);
string processImage(Mat& image);
inline char asciiLookup[256];
void initLookTable();
char getAsciiChar(int pixelValue);


#endif //IMAGEPROCESSOR_H
