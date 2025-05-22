# DocumentEditor in C++

## 📌 Overview
This is a basic C++ implementation of a document editor that supports:
- Adding text entries
- Adding image references (e.g., `.jpg`, `.png`)
- Rendering a simple document
- Saving the rendered document to a text file

## 🚀 Features
- Add text and image references to the document
- Render a unified string representation of the document
- Save the rendered output to a file (`badVersion.txt`)

## 🛠️ How It Works
The `DocumentEditor` class provides the following methods:
- `addText(string text)`: Adds a line of text to the document
- `addImage(string image)`: Adds an image file name (string) to the document
- `renderDocument()`: Returns the combined document as a string
- `saveToFile()`: Writes the rendered document to `badVersion.txt`

### 🖥️ Sample Output
hello, Aditya
image.jpg
This is a sample text.


## 📂 File Generated
- `badVersion.txt`: Contains the rendered output

## 📦 Compilation & Execution
To compile and run the program:

```bash
g++ -o editor main.cpp
./editor
