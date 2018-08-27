add_library (NamesScoreLib NamesScore.cpp NamesScore.h)
add_executable (namesScore main.cpp)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

target_link_libraries (namesScore NamesScoreLib)
