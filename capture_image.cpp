#include <opencv2/opencv.hpp>
#include <iostream>

void capture_image() {
    // Open the default camera (0 is typically the default camera)
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera!" << std::endl;
        return;
    }

    cv::Mat frame;
    cap >> frame; // Capture a frame

    if (frame.empty()) {
        std::cerr << "Error: Failed to capture image!" << std::endl;
        return;
    }

    // Save the captured image
    cv::imwrite("captured_image.png", frame);
    std::cout << "Image captured and saved as 'captured_image.png'" << std::endl;
    return 0;
}
