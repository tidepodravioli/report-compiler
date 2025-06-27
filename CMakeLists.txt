cmake_minimum_required(VERSION 3.11)
project(report_compiler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "C:/Qt/6.9.1/mingw_64/lib/cmake")

find_package(OpenCV REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories("C:/msys64/mingw64/include")
link_directories("C:/msys64/mingw64/lib")

add_executable(report_compiler main.cpp)
target_link_libraries(report_compiler 
${OpenCV_LIBS} 
Qt6::Widgets
C:/msys64/mingw64/lib/libtesseract.dll.a
C:/msys64/mingw64/lib/libleptonica.dll.a)
