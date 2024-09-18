from app import ImageProcessor

def main():
    image_path = "/home/aledev/Downloads/gl.png"
    image_processor = ImageProcessor(image_path)
    image_processor.generarImagen()
    image_processor.copiarResultado()
    image_processor.resultadoEnArchivo("resultado2.txt")

if __name__ == "__main__":
    main()