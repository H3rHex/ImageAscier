from app import ImageProcessor
import time

thresholds = {
    255: "@",  # más oscuro
    224: "#",
    208: "8",
    192: "&",
    176: "%",
    160: "$",
    144: "*",
    128: "+",
    112: "=",
    96: "-",
    80: ":",
    64: "~",
    48: ",",
    32: ".",
    16: "`",
    0: " "  # más claro
}

def main():
    image_path = input("Enter the direction of your image: ")
    image_processor = ImageProcessor(image_path)

    start = time.perf_counter()
    image_processor.generateImage(thresholds=thresholds)
    end = time.perf_counter()

    duration = (end - start) * 1000  # ✅ en milisegundos

    # MOSTRAR RESULTADOS
    image_processor.copyResolut()
    #image_processor.resoultOnFile("resultado.txt")
    #image_processor.printResoult()

    print(f"Processing time: {duration:.3f} ms")

if __name__ == "__main__":
    main()
