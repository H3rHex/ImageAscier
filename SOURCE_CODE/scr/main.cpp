#include "main.h"

void prepareProgram() {
    initLookTable();
    // Colores ANSI
    cout << yellow << "=== ASCII Image Converter ===" << reset << "\n";
    cout << cyan << "Enter image path: " << reset;
    cin >> imagePath;
}

void outputOptionMenu(const string& outputString){
    cout << "\n" << yellow << "Choose output mode:" << reset << "\n";
    cout << cyan << "1. Console" << reset << "\n";
    cout << cyan << "2. File" << reset << "\n";
    cout << cyan << "3. Image (not implemented yet)" << reset << "\n";
    cout << cyan << "Select option (1-3): " << reset;
    cin >> option;

    switch (option) {
        case 1:
            cliOutput(outputString);
            break;
        case 2:
            fileOutput(outputString);
            break;
        default:
            cout << "\033[31mInvalid option\033[0m\n"; // rojo para error
    }
}

int main() {
    try {
        prepareProgram();
        Mat image = loadImage(imagePath);
        // CHECK IF IS EMPTY
        if (image.empty()) {
            cerr << red << "ERROR LOADING IMAGE" << reset << endl;
            return -1;
        }

        auto start = chrono::high_resolution_clock::now();
        string outputString = processImage(image);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, milli> duration = end - start;
        // CLEAR TERMINAL
        cout << "\033[2J\033[H";
        cout << "Image has been processed in: " << duration.count() << "ms" << endl;

        while (option == 0) {
            outputOptionMenu(outputString);
        }


    } catch (const std::exception& e) {
        cerr << red << "ERROR: " << e.what() << reset << endl;
    }
    return 0;
}
