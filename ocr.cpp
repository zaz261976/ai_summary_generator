#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <iostream>

void perform_ocr(const char *image_path) {
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();

    // Initialize Tesseract with the English language
    if (api->Init(NULL, "eng")) {
        std::cerr << "Could not initialize tesseract." << std::endl;
        return;
    }

    // Read the image file
    Pix *image = pixRead(image_path);
    api->SetImage(image);

    // Get OCR result
    char *text = api->GetUTF8Text();
    std::cout << "OCR Output: " << std::endl;
    std::cout << text << std::endl;

    // Clean up
    delete[] text;
    api->End();
    pixDestroy(&image);
}
