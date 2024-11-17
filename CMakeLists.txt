
cmake_minimum_required(VERSION 3.10)
project(AI_Summary_Generator LANGUAGES CXX)
# Set C++ standard version (Optional but recommended)
set(CMAKE_CXX_STANDARD 11)

# Find required packages
find_package(OpenCV REQUIRED)
find_package(Tesseract REQUIRED)
find_package(CURL REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS} ${Tesseract_INCLUDE_DIRS} ${CURL_INCLUDE_DIRS})

# Add the executable
add_executable(AI_Summary_Generator main.cpp capture_image.cpp ocr.cpp summarize.cpp)

# Link libraries
target_link_libraries(AI_Summary_Generator ${OpenCV_LIBS} ${Tesseract_LIBRARIES} ${CURL_LIBRARIES})
