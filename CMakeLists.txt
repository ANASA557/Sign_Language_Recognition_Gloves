cmake_minimum_required(VERSION 4.2)
project(hands_see)

set(CMAKE_CXX_STANDARD 20)

add_executable(hands_see main.cpp
        h/HandStruct.h
        source/dictionaries.json
        h/VectorNorm.h)
