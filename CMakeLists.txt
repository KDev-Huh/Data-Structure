cmake_minimum_required(VERSION 3.29)
project(Data_Structure)

set(CMAKE_CXX_STANDARD 20)

add_executable(Data_Structure main.cpp)
add_executable(array data_structure/array/array.c)
add_executable(array_cpp data_structure/array/array.cpp data_structure/array/array.h
        data_structure/array/arrayExecution.cpp)
