cmake_minimum_required(VERSION 3.29)
project(Data_Structure)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
add_executable(struct_point "Chapter03:배열, 구조체, 포인터/quiz/StructPoint.c")
add_executable(polynomial_add1 "Chapter03:배열, 구조체, 포인터/program/PolynomialAdd1.c")
add_executable(polynomial_add2 "Chapter03:배열, 구조체, 포인터/program/PolynomialAdd2.c")
