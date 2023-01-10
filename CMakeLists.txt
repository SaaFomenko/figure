cmake_minimum_required(VERSION 3.5.0)
project(figure)
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB figure.cpp
								triangle.cpp 
								quadrangle.cpp 
								righttriangle.cpp 
								rightquadrangle.cpp 
								isoscelestriangle.cpp 
								iquilateraltriangle.cpp 
								quadrate.cpp 
								parallelogram.cpp 
								rhomb.cpp)
add_library(figure STATIC ${SOURCE_LIB})
add_executable(figure.exe ${SOURCE_EXE})
target_link_libraries(figure.exe figure)
