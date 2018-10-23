cmake_minimum_required(VERSION 3.12)
project(09fileio C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(09fileio
        fileio.c
        fileio.h)
