#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <filesystem>
#include <chrono>
#include "./OutputModes/outputModes.h"
#include "./ImageProcessor/imageProcessor.h"


using namespace std;
using namespace std::filesystem;

inline const char* yellow = "\033[33m";
inline const char* cyan = "\033[36m";
inline const char* green = "\033[32m";
inline const char* red = "\033[31m";
inline const char* reset = "\033[0m";

void prepareProgram();
void outputOptionMenu(const string& image);
void handleFileOutput(const string& outputString);
void handleImageOutput(const string& outString);
int main();

inline int option = 0;
inline string imagePath;

#endif //MAIN_H
