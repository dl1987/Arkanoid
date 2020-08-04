cmake_minimum_required(VERSION 3.7.2)

project(arkanoid)
set(CMAKE_CXX_STANDARD 17)

file(MAKE_DIRECTORY bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(Application)
add_subdirectory(googletest)
add_subdirectory(Tests)
