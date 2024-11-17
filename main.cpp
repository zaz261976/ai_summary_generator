#include <iostream>
#include <string>
#include "capture_image.cpp"
#include "ocr.cpp"
#include "summarize.cpp"

int main() {
    // Capture image from camera
    capture_image();

    // Perform OCR to extract text from the image
    std::string image_path = "captured_image.png";
    perform_ocr(image_path.c_str());

    // Example extracted text (this will be replaced by OCR result)
    std::string extracted_text = "This is some handwritten text extracted by OCR.";

    // Send text to Python API for summarization
    summarize_text(extracted_text);

    return 0;
}
