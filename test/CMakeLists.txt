cmake_minimum_required(VERSION 3.0)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
set(BOOST_INCLUDE_DIRS $boost_installation_prefix/include)

add_executable(Test test.cpp)
target_include_directories(Test PRIVATE ${BOOST_INCLUDE_DIRS}
                             ${PROJECT_SOURCE_DIR}/src
                           )
target_link_libraries(Test       ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                                             )


add_test(NAME test1 COMMAND Test)
