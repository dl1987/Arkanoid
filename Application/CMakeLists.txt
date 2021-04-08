cmake_minimum_required(VERSION 3.7.2)

set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)
set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

target_link_libraries(${BINARY}_run sfml-graphics sfml-window sfml-system entityx)

