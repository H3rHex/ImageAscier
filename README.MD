# Image to ASCII Art Converter

This script converts an image to ASCII art using characters. It is a simple tool that allows users to input an image and generate a text representation of it using ASCII characters.

## Requirements

- **Python 3.8** or higher
- Required libraries:
  - `Pillow` (for image manipulation).
  - `pyperclip` (for copying output to the clipboard)

## Installation of libraries

It is recommended to use `venv` to create an isolated virtual environment for the project. To install the necessary libraries, follow these steps:

1. Create a virtual environment with `venv`:
    ````bash
    python -m venv venv
    ```

2. Activate the virtual environment:
    - On **Linux/Mac**:
        ````bash
        source venv/bin/activate
        ```
    - On **Windows**:
        ````bash
        venv/scripts/activate
        ```

3. Install the necessary libraries:
    ````bash
    pip install pillow pyperclip
    ```

## How to use

1. Save this script as ``app.py``.
2. Run the script from the command line providing the path to the image file you want to convert as an argument:
    ````bash
    python app.py <path_to_image_file_path>
    ```

   The script will generate a text representation of the image using ASCII characters and copy it to the clipboard. You can also save the output to a file by specifying a file name as an argument.

## Features

- Converts images to ASCII art using characters.
- Supports various image formats (e.g. JPEG, PNG, GIF).
- Can copy the output to the clipboard.
- Can save output to a file.

## Captures

Here are some examples of images converted to ASCII art using this script:

```
          ▓▓▓▓▓▓▓▓▓▓▓▓          
        ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        
      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓      
     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓     
    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    
   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓   
    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  
  ▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  
 ▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ 
 ▓▓▓▓▒▓▓▓▓▓▓▓▓                  
▓▓▓▓▓ ▓▓▓▓▓▓  ▓▓▓█   ***********
▓▓▓▓▓▓ ▓▓▓▓ ▓▓▓▓▓▓▓█ ***********
▓▓▓▓▓▓ ▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓ ▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓ ▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓ ***********
▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓  #***********
 ▓▓▓▓▓▓▓▓▓▓▓▓▓      *********** 
 ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ************ 
  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ***********  
  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ************  
   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ***********   
    ▓▓▓▓▓▓▓▓▓▓▓▓ ***********    
     ▓▓▓▓▓▓▓▓▓▓ ***********     
      █▓▓▓▓▓▓▓▓ *********+      
        ▓▓▓▓▓▓ *********        
          ▓▓▓▓ *******          


```
## Recommendations

- For best results, use images with a moderate pixel size (e.g. 400x400 pixels). Large images can take a long time to process and may not produce optimal results.
- Experiment with different image formats and sizes to find the best combination for your needs.

## License

This script is licensed under the MIT License. See the `LICENSE` file for details.

## Author

H3RHEX

## Execution of the script

To run the script, follow the steps below:

1. Activate the virtual environment (if you have not already done so):
    - In **Linux/Mac**:
        ````bash
        source venv/bin/activate
        ```
    - On **Windows**:
        ````bash
        venv/scripts/activate
        ```

2. Run the script with the command:
    ````bash
    python app.py <path_to_image_file_path>
    ```

   Replace `<path_to_image_file>` with the path to the image file you want to convert.

   Example run:
    ````bash
    python app.py image.jpg
    ```

   This will convert the image ``image.jpg`` to ASCII art and copy it to the clipboard.

## Troubleshooting

If you encounter any problems running the script, make sure that:

- You have the necessary libraries installed (`Pillow` and `pyperclip`).
- The path to the image file is correct.
- The virtual environment is activated correctly.

If you still have problems, feel free to open an issue in this repository for help.

## Contributions

If you want to contribute to this project, please open a pull request with your changes. I'm open to any suggestions or improvements you wish to make.

## Acknowledgements

I thank everyone who has contributed to this project, either with code, suggestions or simply with their support. Thank you for using this script!


## ESP

# Conversor de Imagen a Arte ASCII

Este script convierte una imagen en arte ASCII utilizando caracteres. Es una herramienta sencilla que permite a los usuarios ingresar una imagen y generar una representación de texto de ella utilizando caracteres ASCII.

## Requisitos

- **Python 3.8** o superior
- Librerías necesarias:
  - `Pillow` (para manipulación de imágenes)
  - `pyperclip` (para copiar la salida al portapapeles)

## Instalación de librerías

Se recomienda utilizar `venv` para crear un entorno virtual aislado para el proyecto. Para instalar las librerías necesarias, sigue los siguientes pasos:

1. Crea un entorno virtual con `venv`:
    ```bash
    python -m venv venv
    ```

2. Activa el entorno virtual:
    - En **Linux/Mac**:
        ```bash
        source venv/bin/activate
        ```
    - En **Windows**:
        ```bash
        venv\Scripts\activate
        ```

3. Instala las librerías necesarias:
    ```bash
    pip install pillow pyperclip
    ```

## Cómo usar

1. Guarda este script como `app.py`.
2. Ejecuta el script desde la línea de comandos proporcionando la ruta al archivo de imagen que deseas convertir como argumento:
    ```bash
    python app.py <ruta_al_archivo_de_imagen>
    ```

   El script generará una representación de texto de la imagen utilizando caracteres ASCII y la copiará al portapapeles. También puedes guardar la salida en un archivo especificando un nombre de archivo como argumento.

## Características

- Convierte imágenes en arte ASCII utilizando caracteres.
- Soporta varios formatos de imagen (por ejemplo, JPEG, PNG, GIF).
- Puede copiar la salida al portapapeles.
- Puede guardar la salida en un archivo.

## Capturas

Aquí te dejo algunos ejemplo de imágenconvertid a arte ASCII utilizando este script:
```
          ▓▓▓▓▓▓▓▓▓▓▓▓          
        ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        
      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓      
     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓     
    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    
   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓   
    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  
  ▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  
 ▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ 
 ▓▓▓▓▒▓▓▓▓▓▓▓▓                  
▓▓▓▓▓ ▓▓▓▓▓▓  ▓▓▓█   ***********
▓▓▓▓▓▓ ▓▓▓▓ ▓▓▓▓▓▓▓█ ***********
▓▓▓▓▓▓ ▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓ ▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓ ▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓ *********
▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓ **********
▓▓▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓ ***********
▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓  #***********
 ▓▓▓▓▓▓▓▓▓▓▓▓▓      *********** 
 ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ************ 
  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ***********  
  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ************  
   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ***********   
    ▓▓▓▓▓▓▓▓▓▓▓▓ ***********    
     ▓▓▓▓▓▓▓▓▓▓ ***********     
      █▓▓▓▓▓▓▓▓ *********+      
        ▓▓▓▓▓▓ *********        
          ▓▓▓▓ *******          


```
## Recomendaciones

- Para obtener los mejores resultados, utiliza imágenes con un tamaño de píxel moderado (por ejemplo, 400x400 píxeles). Las imágenes grandes pueden tardar mucho en procesarse y no producir resultados óptimos.
- Experimenta con diferentes formatos y tamaños de imagen para encontrar la mejor combinación para tus necesidades.

## Licencia

Este script está licenciado bajo la Licencia MIT. Ver el archivo `LICENSE` para más detalles.

## Autor

H3RHEX

## Ejecución del script

Para ejecutar el script, sigue los siguientes pasos:

1. Activa el entorno virtual (si no lo has hecho ya):
    - En **Linux/Mac**:
        ```bash
        source venv/bin/activate
        ```
    - En **Windows**:
        ```bash
        venv\Scripts\activate
        ```

2. Ejecuta el script con el comando:
    ```bash
    python app.py <ruta_al_archivo_de_imagen>
    ```

   Reemplaza `<ruta_al_archivo_de_imagen>` con la ruta al archivo de imagen que deseas convertir.

   Ejemplo de ejecución:
    ```bash
    python app.py imagen.jpg
    ```

   Esto convertirá la imagen `imagen.jpg` en arte ASCII y la copiará al portapapeles.

## Troubleshooting

Si encuentras algún problema al ejecutar el script, asegúrate de que:

- Tienes instaladas las librerías necesarias (`Pillow` y `pyperclip`).
- La ruta al archivo de imagen es correcta.
- El entorno virtual está activado correctamente.

Si sigues teniendo problemas, no dudes en abrir un issue en este repositorio para obtener ayuda.

## Contribuciones

Si deseas contribuir a este proyecto, por favor, abre un pull request con tus cambios. Estoy abierto a cualquier sugerencia o mejora que desees hacer.

## Agradecimientos

Agradezco a todos los que han contribuido a este proyecto, ya sea con código, sugerencias o simplemente con su apoyo. ¡Gracias por utilizar este script!

