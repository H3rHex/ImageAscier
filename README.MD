# 🖼️ ImageAscier-V2

> 🇬🇧 Convert images to ASCII — fast and flexible  
> 🇪🇸 Convierte imágenes a ASCII — rápido y flexible

---

## 📜 Overview · Descripción

**🇬🇧**  
ImageAscier-V2 is a C++17 tool that converts images into ASCII art. It supports multiple output modes: display in the terminal, export to a text file, and export as an image. It is Linux-only and relies on OpenCV for image handling.

**🇪🇸**  
ImageAscier-V2 es una herramienta en C++17 que convierte imágenes en arte ASCII. Soporta varios modos de salida: mostrar en terminal, exportar a un archivo de texto y exportar como imagen. Funciona únicamente en Linux y depende de OpenCV.

---

## ⚙️ Requirements · Requisitos

**🇬🇧**
- Linux system
- `cmake` (>= 3.10)
- `g++` with C++17 support
- OpenCV (>= 4.0)

**🇪🇸**
- Sistema Linux
- `cmake` (>= 3.10)
- `g++` con soporte para C++17
- OpenCV (>= 4.0)

---

## 🚀 Getting Started · Primeros pasos

### 🔧 Install Dependencies · Instalar dependencias

**🇬🇧**
```bash
sudo apt update
sudo apt install libopencv-dev
🇪🇸

bash
Copy
Edit
sudo apt update
sudo apt install libopencv-dev
📦 Compile the Project · Compilar el proyecto
🇬🇧
The project includes a build script that configures and compiles everything automatically.
You can also use the provided precompiled binary if compatible.

🇪🇸
El proyecto incluye un script que configura y compila todo automáticamente.
También puedes usar el binario precompilado si es compatible.

bash
Copy
Edit
chmod +x build.sh
./build.sh
Then run:

bash
Copy
Edit
./image_ascier_v2
📁 Project Structure · Estructura del proyecto
pgsql
Copy
Edit
ImageAscier-V2/
├── SOURCE_CODE/
│   ├── scr/                        # Main logic / Lógica principal
│   ├── includes/
│   │   ├── ImageProcessor/         # ASCII conversion
│   │   └── OutputModes/            # Output modes / Modos de salida
├── image_ascier_v2                 # Precompiled binary / Binario precompilado
├── build.sh                        # Build script / Script de compilación
├── CMakeLists.txt                  # CMake project file
└── README.md                       # This file / Este archivo
🎨 Output Modes · Modos de salida
🇬🇧

Console Output – Print ASCII art to terminal

File Output – Save as output.txt

Image Output – Export to AsciiImage.png (experimental)

🇪🇸

Salida por consola – Muestra el arte ASCII en la terminal

Salida a archivo – Guarda como output.txt

Salida como imagen – Exporta como AsciiImage.png (experimental)

🛈 Image output may not fully preserve spacing due to OpenCV rendering limitations.
🛈 La salida como imagen puede no respetar completamente los espacios debido a limitaciones del renderizado de OpenCV.

🐞 Known Issues · Problemas conocidos
🇬🇧

Only works on Linux

Requires OpenCV installed system-wide

Image output may not align ASCII characters perfectly

🇪🇸

Solo funciona en Linux

Requiere OpenCV instalado en el sistema

La imagen exportada puede no alinear los caracteres correctamente

👤 Author · Autor
Created by @H3rHex

📄 License · Licencia
MIT License
You are free to use, modify and distribute this project.

Licencia MIT
Eres libre de usar, modificar y distribuir este proyecto.


---
