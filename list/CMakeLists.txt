# cmake_minimum_required(VERSION <specify CMake version here>)
project(list)

set(CMAKE_CXX_STANDARD 11)

add_executable(list
        list.c
        list.h
        main.c)
