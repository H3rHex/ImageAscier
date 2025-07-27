#!/bin/bash

mkdir -p builds/linux
cd builds/linux
cmake ../.. -DCMAKE_BUILD_TYPE=Release
cmake --build .
clear
./image_ascier_v2