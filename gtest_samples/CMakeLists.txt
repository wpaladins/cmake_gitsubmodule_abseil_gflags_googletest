add_executable(
    gtest_sample3_unittest
    gtest_samples/sample3-inl.h
    gtest_samples/sample3_unittest.cc
)
target_link_libraries(gtest_sample3_unittest gtest_main)

add_executable(
    gtest_sample4_unittest
    gtest_samples/sample4.cc
    gtest_samples/sample4_unittest.cc
)
target_link_libraries(gtest_sample4_unittest gtest_main)