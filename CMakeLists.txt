cmake_minimum_required(VERSION 3.10)
project(ImageAscierV2)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCV
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(SOURCE_CODE/includes)

add_executable(image_ascier_v2
        SOURCE_CODE/scr/main.cpp
        SOURCE_CODE/includes/ImageProcessor/imageProcessor.cpp
        SOURCE_CODE/scr/main.h
        SOURCE_CODE/includes/OutputModes/outputModes.cpp
)

target_link_libraries(image_ascier_v2 ${OpenCV_LIBS})
