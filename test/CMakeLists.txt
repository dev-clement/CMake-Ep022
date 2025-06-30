include(AddGoogleTest)

set(TARGET_NAME unittest)
add_executable(
    ${TARGET_NAME} 
    test_calc.cpp
)
target_link_libraries(
    ${TARGET_NAME} PRIVATE calculator GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(${TARGET_NAME})
