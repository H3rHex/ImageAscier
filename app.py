from PIL import Image
import pyperclip

class ImageProcessor:
    def __init__(self, image_path):
        # Cargar la imagen
        self.imagen = Image.open(image_path)
        self.resultado = ""

    def generarImagen(self, thresholds):
        # Convertir la imagen a escala de grisas
        self.imagen = self.imagen.convert('L')

        # Obtener el ancho y alto de la imagen
        ancho, alto = self.imagen.size
        

        for y in range(alto):
            for x in range(ancho):
                pixel = self.imagen.getpixel((x , y))
                for threshold, char in thresholds.items():
                    if pixel >= threshold:
                        self.resultado += char
                        break
                    elif pixel < 32:  # add a default case for pixels with value < 32
                        self.resultado += " "
                        break

            self.resultado += "\n"


    def copiarResultado(self):
        # Copiar el resultado al portapapeles
        pyperclip.copy(self.resultado)
        print("El resultado ha sido copiado en el portapapeles")

    def resultadoEnArchivo(self, filename):
        # Guardar el resultado en un archivo
        with open(filename, "w", encoding="utf-8") as f:
            f.write(self.resultado)
        print("El resultado ha sido guardado en el archivo")
    
    def imprimirResultado(self):
        # Imprimir el resultado en la consola
        print(self.resultado)
