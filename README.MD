
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

HEREHK-DEV 

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
