cmake_minimum_required(VERSION 3.1)

project(ctest_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

option(BUILD_TESTS "Build the tests" ON)

if(BUILD_TESTS)
    find_package(Boost COMPONENTS unit_test_framework REQUIRED)
    enable_testing()
    include(BoostTestHelper)
endif()

set(LIBRARY_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src/library)