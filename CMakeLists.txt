cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(sample_project CXX C)

# Core and main are split. This allows us to link core to main and tests.

# Core library. *.cpp should be added here.
add_library(core
  ./src/core.cpp)

# Main entry point.
add_executable(main
  ./src/main.cpp)

# Link core to main.
target_link_libraries(main
  core)

# Add flags.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
