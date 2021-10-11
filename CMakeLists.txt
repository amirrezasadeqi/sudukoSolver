cmake_minimum_required(VERSION 3.20)
project(sudukoSolver C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_SOURCE_DIR src)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")
find_package(Criterion REQUIRED)

add_executable(sudukoSolver src/main.c)
add_executable(testsys src/test/test.c)
target_link_libraries(testsys PRIVATE ${CRITERION_LIBRARIES})
target_include_directories(testsys PRIVATE ${CRITERION_INCLUDE_DIRS})


