cmake_minimum_required(VERSION 3.20)
project(Calendar)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calendar main.cpp Calendar.cpp Calendar.h Date.cpp Date.h)
