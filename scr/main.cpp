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
    cout << cyan << "3. Image" << reset << "\n";
    cout << cyan << "Select option (1-3): " << reset;
    cin >> option;

    switch (option) {
        case 1:
            cliOutput(outputString);
            break;
        case 2:
            handleFileOutput(outputString);
            break;
        case 3:
            handleImageOutput(outputString);
            break;
        default:
            cout << "\033[31mInvalid option\033[0m\n"; // rojo para error
    }
}

void handleFileOutput(const string& outputString){
    string fileName  = "image_ascier_text";
    cout << cyan << "Select a file name  " << red << "[NO EXTENSION NEEDED] : " << reset;
    cin >> fileName;
    cout << green << "Processing text file output, this may take a while..." << reset << endl;
    fileOutput(outputString, fileName);
}

void handleImageOutput(const string& outputString){
    string fileName  = "image_ascier_img";
    cout << cyan << "Select a file name  " << red << "[NO EXTENSION NEEDED] : " << reset;
    cin >> fileName;
    cout << green << "Processing image output, this may take a while..." << reset << endl;
    try{
        imageOutput(outputString, fileName);
    } catch (const std::exception& e) {
        cerr << red << "ERROR: " << e.what() << reset << endl;
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
        while (option == 0) {
            outputOptionMenu(outputString);
        }

        // CLEAR TERMINAL
        cout << "\033[2J\033[H";
        cout << green << "Image has been processed in: " << duration.count() << "ms" << reset << endl;

        if (option != 1){
            cout << green << "You could fine your image at Downloads folder" << reset << endl;

        }

    } catch (const std::exception& e) {
        cerr << red << "ERROR: " << e.what() << reset << endl;
    }
    return 0;
}
