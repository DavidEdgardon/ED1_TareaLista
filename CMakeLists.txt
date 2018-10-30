cmake_minimum_required(VERSION 3.7)
project(ED1Lista)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Arbol.cpp Arbol.h Fruta.h)
add_executable(ED1Lista ${SOURCE_FILES})