from PIL import Image
import pyperclip

class ImageProcessor:
    def __init__(self, image_path):
        # Cargar la imagen
        self.imagen = Image.open(image_path)
        self.resultado = ""

    def generarImagen(self):
        # Recorre el alto (eje y)
        for y in range(self.imagen.size[1]): 
            # Recorre el ancho (eje x)
            for x in range(self.imagen.size[0]):  
                # Obtener el color del píxel en las coordenadas (x, y)
                pixel = self.imagen.getpixel((x, y))
                
                # Comparar si el píxel es más claro o más oscuro que el umbral
                if all(c >= 127.5 for c in pixel[:3]):  # Comparar solo R, G, B
                    self.resultado += "#"
                elif all(c > 0 for c in pixel[:3]) and all(c < 127.5 for c in pixel[:3]):
                    self.resultado += "$"
                else:
                   self.resultado += " "
            # Añadir un salto de línea al final de cada fila
            self.resultado += "\n"

    def copiarResultado(self):
        # Mostrar el resultado
        print("El resultado ha sido copiado en el portapapeles")
        pyperclip.copy(self.resultado)

    def resultadoEnArchivo(self, filename):
        # Guardar el resultado en un archivo
        with open(filename, "w") as f:
            f.write(self.resultado)
        print("El resultado ha sido guardado en el archivo")

    
