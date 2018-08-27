cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

project(namesScore)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

add_subdirectory(src)

enable_testing()
add_subdirectory(test)
