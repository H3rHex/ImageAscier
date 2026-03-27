#include "imageProcessor.h"

Mat loadImage(const string& imagePath) {
    try {
        Mat image = imread(imagePath, IMREAD_GRAYSCALE);
        if (image.empty()) {
            throw runtime_error("ERROR: Could not load image from " + imagePath);
        }

        // Ancho objetivo en caracteres
        int targetCols = 300; // ajusta según quieras
        int targetRows = (int)(image.rows * targetCols / (float)image.cols * 0.5f); // *0.5 corrige el ratio

        Mat resized;
        resize(image, resized, Size(targetCols, targetRows));
        return resized;

    } catch (const std::exception& e) {
        cerr << "ERROR: " << e.what() << endl;
        return {};
    }
}

string processImage(Mat& image) {
    size_t totalSize = (image.cols + 1) * image.rows;
    auto buffer = make_unique<char[]>(totalSize);
    char* cursor = buffer.get();
    //LOOP Y
    for (int y = 0; y < image.rows; ++y) {
        auto* rowPtr = image.ptr<uchar>(y);
        for (int x = 0; x < image.cols; ++x) {
            int pixelValue = rowPtr[x];
            *cursor = getAsciiChar(pixelValue);
            ++cursor;
        }
        *cursor = '\n';
        ++cursor;
    }
    return {buffer.get(), totalSize};
}

void initLookTable() {
    for (int i = 0; i <= 255; ++i) {
        for (const auto& t : thresholds) {
            if (i >= t.first) {
                asciiLookup[i] = t.second;
                break; // ya encontramos el caracter para este i
            }
        }
    }
}
char getAsciiChar(int pixelValue) {
    return asciiLookup[pixelValue];
}
