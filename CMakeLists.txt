cmake_minimum_required(VERSION 3.10)
project(ImageAscierV2)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCV
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(image_ascier_v2
        scr/main.cpp
        scr/ImageProcessor/imageProcessor.cpp
        scr/main.h
        scr/OutputModes/outputModes.cpp
)

target_link_libraries(image_ascier_v2 ${OpenCV_LIBS})
