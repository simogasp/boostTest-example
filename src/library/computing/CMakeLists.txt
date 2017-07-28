set(SOURCE_FILES multiplication.cpp)
add_library(computing ${SOURCE_FILES})
target_include_directories(computing PUBLIC $<BUILD_INTERFACE:${LIBRARY_INCLUDE_DIR}>)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()