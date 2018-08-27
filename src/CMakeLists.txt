add_library(NamesScoreLib STATIC NamesScore.cpp NamesScore.h)
add_executable(namesScore main.cpp)
target_link_libraries(namesScore NamesScoreLib)
