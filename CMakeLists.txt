#минимальаня версия
cmake_minimum_required(VERSION 3.26)
# имя проекта
project(exam C)

# стандарт для компилятора
set(CMAKE_C_STANDARD 11)

# исполняемы файл
add_executable(exam_app main.c)

# создание библиотеки
add_library(exam_lib library.c)

# связывание исполняемого файла и библиотеки.
target_link_libraries(exam_app exam_lib)
