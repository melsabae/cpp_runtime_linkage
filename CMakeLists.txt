cmake_minimum_required(VERSION 3.26.4)
project(cpp_runtime_linkage)


add_library(test_lib SHARED test.cpp)


add_executable(main main.cpp)
target_compile_options(main PUBLIC -Wall -Wextra -std=c++17)
target_link_libraries(main test_lib)

