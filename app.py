from PIL import Image
import pyperclip

class ImageProcessor:
    def __init__(self, image_path):
        # Cargar la imagen
        self.imagen = Image.open(image_path)
        self.resultado = ""

    def generarImagen(self, numIter):
        # Convertir la imagen a escala de grisas
        self.imagen = self.imagen.convert('L')

        # Obtener el ancho y alto de la imagen
        ancho, alto = self.imagen.size

        thresholds = {
            255: "@",   #  255-224 (very light gray)
            224: "#",   #  223-208 (light gray)
            208: "$",   #  207-192 (medium light gray)
            192: "%",   #  191-176 (medium gray)
            176: "*",   #  175-160 (medium dark gray)
            160: "+",   #  159-144 (dark gray)
            144: "-",   #  143-128 (very dark gray)
            128: "█",   #  127-96 (black)
            96: "▓",    #  95-80 (dark gray)
            80: "▒",    #  79-64 (medium gray)
            64: "░",    #  63-48 (medium light gray)
            48: "·",    #  47-32 (light gray)
            32: "~"     #  31-0 (very light gray)
        }

        for y in range(alto):
            for x in range(ancho):
                pixel = self.imagen.getpixel((x + numIter, y + numIter))
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
        with open(filename, "w") as f:
            f.write(self.resultado)
        print("El resultado ha sido guardado en el archivo")
    
    def imprimirResultado(self):
        # Imprimir el resultado en la consola
        print(self.resultado)
    

