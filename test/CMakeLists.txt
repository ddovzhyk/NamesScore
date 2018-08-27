include_directories(${PROJECT_SOURCE_DIR}/src)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

add_executable(unit_tests tests.cpp)

target_link_libraries(unit_tests NamesScoreLib
                                 ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                     )

target_compile_definitions(unit_tests PRIVATE BOOST_TEST_DYN_LINK)

add_test(NAME test_all COMMAND unit_tests)
