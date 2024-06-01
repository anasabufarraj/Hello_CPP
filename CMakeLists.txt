cmake_minimum_required(VERSION 3.27)
project(Hello_CPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        Hello_CPP main.cpp
        utils/functions.cpp
        Rectangle.cpp
        Rectangle.h
        Length.cpp
        Length.h
        Pair.cpp
        Pair.h
)
