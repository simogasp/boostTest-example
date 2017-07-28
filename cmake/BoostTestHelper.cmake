function(add_boost_test SOURCE_FILE_NAME DEPENDENCY_LIBS)

    # get the name without the extension (NAME_WE)
    get_filename_component(TEST_EXECUTABLE_NAME ${SOURCE_FILE_NAME} NAME_WE)

    add_executable(${TEST_EXECUTABLE_NAME} ${SOURCE_FILE_NAME})

    target_link_libraries(${TEST_EXECUTABLE_NAME}
            ${DEPENDENCY_LIBS} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

    # test_case must be always contained in a test_suite
    file(READ "${SOURCE_FILE_NAME}" SOURCE_FILE_CONTENTS)
    string(REGEX MATCHALL "BOOST_AUTO_TEST_SUITE\\( *([A-Za-z_0-9]+) *\\)"
            FOUND_TESTS ${SOURCE_FILE_CONTENTS})

    foreach(HIT ${FOUND_TESTS})
        string(REGEX REPLACE ".*\\( *([A-Za-z_0-9]+) *\\).*" "\\1" TEST_NAME ${HIT})

        add_test(NAME "${TEST_EXECUTABLE_NAME}.${TEST_NAME}"
                COMMAND ${TEST_EXECUTABLE_NAME}
                --run_test=${TEST_NAME} --catch_system_error=yes)
    endforeach()

#    add_test(NAME ${TEST_EXECUTABLE_NAME}
#             COMMAND ${TEST_EXECUTABLE_NAME} --catch_system_error=yes)

endfunction()