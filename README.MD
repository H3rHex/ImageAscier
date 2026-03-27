# ImageAscier-V2

Convert images into ASCII art from the terminal.

## Overview | Descripcion

**EN**  
ImageAscier-V2 is a C++17 command-line tool that converts images into ASCII art using OpenCV.
It supports three output modes:
- Console output
- Text file export (`.txt`)
- Image export (`.png`)

**ES**  
ImageAscier-V2 es una herramienta de linea de comandos en C++17 que convierte imagenes en arte ASCII usando OpenCV.
Soporta tres modos de salida:
- Salida por consola
- Exportacion a archivo de texto (`.txt`)
- Exportacion a imagen (`.png`)

## Requirements | Requisitos

**EN**
- Linux
- `cmake` 3.10+
- `g++` with C++17 support
- OpenCV 4+
- OpenCV FreeType module (used for image output mode)

**ES**
- Linux
- `cmake` 3.10+
- `g++` con soporte C++17
- OpenCV 4+
- Modulo FreeType de OpenCV (usado para el modo de salida en imagen)

Ubuntu/Debian example:

```bash
sudo apt update
sudo apt install -y build-essential cmake libopencv-dev libopencv-contrib-dev
```

## Build and Run | Compilar y Ejecutar

### Option 1: Build script (recommended) | Opcion 1: Script de build (recomendada)

`build.sh` creates `builds/linux`, compiles in Release mode, and runs the program.

```bash
chmod +x build.sh
./build.sh
```

### Option 2: Manual CMake | Opcion 2: CMake manual

```bash
mkdir -p builds/linux
cd builds/linux
cmake ../.. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./image_ascier_v2
```

## Usage | Uso

**EN**
1. Enter the image path when prompted.
2. Choose output mode:
   - `1` Console
   - `2` Text file
   - `3` Image file
3. For file/image modes, enter an output name (without extension).

Generated files are saved in your `~/Downloads` directory.

**ES**
1. Ingresa la ruta de la imagen cuando el programa la solicite.
2. Elige el modo de salida:
   - `1` Consola
   - `2` Archivo de texto
   - `3` Archivo de imagen
3. Para archivo/imagen, ingresa un nombre de salida (sin extension).

Los archivos generados se guardan en `~/Downloads`.

## Project Structure | Estructura del Proyecto

```text
ImageAscier/
|-- scr/
|   |-- main.cpp
|   |-- main.h
|   |-- ImageProcessor/
|   |   |-- imageProcessor.cpp
|   |   `-- imageProcessor.h
|   `-- OutputModes/
|       |-- outputModes.cpp
|       `-- outputModes.h
|-- build.sh
|-- CMakeLists.txt
`-- README.MD
```

## Known Limitations | Limitaciones Conocidas

**EN**
- Linux-oriented workflow.
- Requires OpenCV installed on the system.
- Image output depends on a local monospace font path (`DejaVuSansMono.ttf`).

**ES**
- Flujo orientado a Linux.
- Requiere OpenCV instalado en el sistema.
- La salida en imagen depende de una fuente monoespaciada local (`DejaVuSansMono.ttf`).

## Author | Autor

Created by `@H3rHex`.

## License | Licencia

This project is licensed under the GNU GENERAL PUBLIC LICENSE.