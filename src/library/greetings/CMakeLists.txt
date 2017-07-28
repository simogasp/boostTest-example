set(SOURCE_FILES hello.cpp goodbye.cpp)
add_library(greetings ${SOURCE_FILES})
target_include_directories(greetings PUBLIC $<BUILD_INTERFACE:${LIBRARY_INCLUDE_DIR}>)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()