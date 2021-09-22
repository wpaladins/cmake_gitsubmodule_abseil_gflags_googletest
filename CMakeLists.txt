cmake_minimum_required(VERSION 3.0.0)
project(git_submodule_test VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(test_gflags test_gflags.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(third_party/gflags)

target_link_libraries(test_gflags gflags::gflags)