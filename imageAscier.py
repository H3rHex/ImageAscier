from app import ImageProcessor

thresholds = {
            255: "●",   #  255-224 (muy claro)
            224: "○",   #  223-208 (claro)
            208: "△",   #  207-192 (medio claro)
            192: "□",   #  191-176 (medio)
            176: "▽",   #  175-160 (medio oscuro)
            160: "◇",   #  159-144 (oscuro)
            144: "◆",   #  143-128 (muy oscuro)
            128: "█",   #  127-96 (negro)
            96: "▓",    #  95-80 (oscuro)
            80: "▒",    #  79-64 (medio)
            64: "░",    #  63-48 (medio claro)
            48: "·",    #  47-32 (claro)
            32: "‣"     #  31-0 (muy claro)
        }     

def main():
    image_path = "gl.png"
    image_processor = ImageProcessor(image_path)
    image_processor.generarImagen(thresholds=thresholds) #Se declara numIter en 0 para que comience a analizar la imagen en las cordenadas (0,0)

    #MOSTRAR RESULTADOS
    #image_processor.copiarResultado()
    image_processor.resultadoEnArchivo("resultado.txt")
    #image_processor.imprimirResultado()

if __name__ == "__main__":
    main()
