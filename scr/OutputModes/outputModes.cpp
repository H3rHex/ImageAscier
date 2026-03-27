#include "outputModes.h"

void cliOutput(const std::string& outputString) {
    cout << outputString << endl;
}

void fileOutput(const std::string& outputString, const std::string& fileName) {
    std::ofstream outFile(getDownloadsPath() + fileName + ".txt", ios::out | ios::trunc);
    if (!outFile) {
        std::cerr << "Error: Could not open file " << "outputFile" << " for writing.\n";
        return;
    }
    outFile << outputString;
}

#include <opencv2/freetype.hpp>

void imageOutput(const std::string& outputString, const std::string& fileName) {
    std::vector<std::string> lines;
    std::stringstream ss(outputString);
    std::string line;
    while (std::getline(ss, line)) lines.push_back(line);

    // Carga una fuente monoespaciada .ttf (ajusta la ruta)
    auto ft2 = cv::freetype::createFreeType2();
    ft2->loadFontData("/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf", 0);

    int fontHeight = 12; // px por carácter, ajústalo a tu gusto
    int baseline   = 0;

    // Con FreeType2 todos los chars tienen el mismo ancho (es monoespaciada)
    cv::Size charSize = ft2->getTextSize("A", fontHeight, -1, &baseline);
    int charW = charSize.width;
    int charH = charSize.height + baseline + 2;

    int maxCols = 0;
    for (auto& l : lines) maxCols = std::max(maxCols, (int)l.size());

    int imgW = maxCols * charW;
    int imgH = (int)lines.size() * charH + 4;

    cv::Mat img(imgH, imgW, CV_8UC3, cv::Scalar(0, 0, 0));

    for (int i = 0; i < (int)lines.size(); i++) {
        cv::Point origin(0, charH + i * charH);
        ft2->putText(img, lines[i], origin, fontHeight, cv::Scalar(255, 255, 255), -1, cv::LINE_AA, true);
    }

    cv::imwrite(getDownloadsPath() + fileName + ".png", img);
}

std::string getDownloadsPath() {
    // funciona en Windows, Linux y macOS sin #ifdef
    std::filesystem::path downloads = std::filesystem::path(
        std::getenv(
#ifdef _WIN32
            "USERPROFILE"
#else
            "HOME"
#endif
        )
    ) / "Downloads";

    return downloads.string() + "/";
}