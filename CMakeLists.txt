cmake_minimum_required(VERSION 3.0.0)
project(git_submodule_test VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(test_gflags test_gflags.cpp)
add_executable(test_abseil test_abseil.cpp)
add_executable(test_googletest test_googletest.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(third_party/abseil)
add_subdirectory(third_party/gflags)
add_subdirectory(third_party/googletest)

target_link_libraries(test_gflags gflags::gflags)
target_link_libraries(test_abseil absl::strings)
target_link_libraries(test_googletest gtest_main)