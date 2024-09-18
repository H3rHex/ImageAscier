from app import ImageProcessor

def main():
    image_path = "./gl.png"
    image_processor = ImageProcessor(image_path)
    image_processor.generarImagen(numIter=0) #Se declara numIter en 0 para que comience a analizar la imagen en las cordenadas (0,0)

    #MOSTRAR RESULTADOS
    #image_processor.copiarResultado()
    image_processor.resultadoEnArchivo("resultado.txt")
    #image_processor.imprimirResultado()

if __name__ == "__main__":
    main()