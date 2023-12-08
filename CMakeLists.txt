cmake_minimum_required(VERSION 3.26)
project(AoC_D1 C)

set(CMAKE_C_STANDARD 11)

add_executable(AoC_D1 main.c
        extractFirstAndLastDigit.c
        extractFirstAndLastDigit.h)
