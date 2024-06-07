cmake_minimum_required(VERSION 3.26)
project(exam C)

set(CMAKE_C_STANDARD 11)


add_executable(exam_app main.c)


add_library(exam_lib library.c)


target_link_libraries(exam_app exam_lib)
