cmake_minimum_required(VERSION 3.20)
project(sudukoSolver C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_SOURCE_DIR src)

add_executable(sudukoSolver src/main.c src/test/test.c)
