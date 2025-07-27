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

2. Activate the virtual environment:
    - On **Linux/Mac**:
        ````bash
        source venv/bin/activate
    - On **Windows**:
        ````bash
        venv/scripts/activate

3. Install the necessary libraries:
    ````bash
    pip install pillow pyperclip

## How to use

1. Save this script as ``imageAscier.py``.
2. Run the script from the command line providing the path to the image file you want to convert as an argument:
    ````bash
    python imageAscier.py

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

## Author

H3RHEX
