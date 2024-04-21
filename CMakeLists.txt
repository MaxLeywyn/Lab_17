cmake_minimum_required(VERSION 3.26)
project(Lab_17 C)

set(CMAKE_C_STANDARD 11)

add_executable(Lab_17 main.c
        string/string_.c
        string/string_.h
        string/string_test.h
        string/string_test.c
        string/string_processing.h
        string/string_processing.c
        string/string_processing_test.h
        string/string_processing_test.c)

