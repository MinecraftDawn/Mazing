cmake_minimum_required(VERSION 3.10)
project(Mazing)

set(CMAKE_CXX_STANDARD 11)

add_executable(Mazing main.cpp cpp/Path.h cpp/Mazing.h)