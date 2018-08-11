set(UNIT_TEST_LIST
    example)

foreach(NAME IN LISTS UNIT_TEST_LIST)
    list(APPEND UNIT_TEST_SOURCE_LIST ${NAME}.test.cpp)
endforeach()

set(TARGET_NAME tests)

add_executable(${TARGET_NAME}
    main.cpp
    ${UNIT_TEST_SOURCE_LIST})

target_link_libraries(${TARGET_NAME}
    PUBLIC example)

target_include_directories(${TARGET_NAME}
    PUBLIC ../)

add_test(
    NAME ${TARGET_NAME}
