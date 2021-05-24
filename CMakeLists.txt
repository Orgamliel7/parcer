cmake_minimum_required(VERSION 3.19)
project(parser)

set(CMAKE_CXX_STANDARD 20)
file(GLOB SOURCES *.cpp)#Reload all .cpp files into Variable SOURCES
add_executable(parser cmake-build-debug/main.cpp enums.h parser.h strings.h symbol.h symbol.cpp parser.cpp)
