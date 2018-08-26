cmake_minimum_required(VERSION 3.0)

set (CMAKE_CXX_STANDARD 11)

project(nameScore)
file(GLOB SOURCES main.cpp NamesScore.h NamesScore.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
include_directories("${PROJECT_BINARY_DIR}")
