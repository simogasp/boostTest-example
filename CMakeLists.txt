cmake_minimum_required(VERSION 3.1)

project(ctest_example)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

option(BUILD_TESTS "Build the tests" ON)

if(BUILD_TESTS)
    find_package(Boost COMPONENTS unit_test_framework system REQUIRED)
    message(STATUS "Boost_<C>_FOUND ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} ${Boost_LIBRARY_DIR} ${Boost_SYSTEM_LIBRARY} ${Boost_INCLUDE_DIRS} ${Boost_FOUND}")
    enable_testing()
    include(BoostTestHelper)
endif()

set(LIBRARY_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src/library)