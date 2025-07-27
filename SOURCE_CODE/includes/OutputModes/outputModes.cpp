#include "outputModes.h"

void cliOutput(const std::string& outputString) {
    cout << outputString << endl;
}

void fileOutput(const std::string& outputString) {
    std::ofstream outFile("outputFile", ios::out | ios::trunc);
    if (!outFile) {
        std::cerr << "Error: Could not open file " << "outputFile" << " for writing.\n";
        return;
    }
    outFile << outputString;
}

