set(SOURCE_FILES hello.cpp goodbye.cpp)
add_library(library ${SOURCE_FILES})
target_include_directories(library PUBLIC $<BUILD_INTERFACE:${LIBRARY_INCLUDE_DIR}>)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()