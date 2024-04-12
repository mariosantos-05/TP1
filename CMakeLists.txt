cmake_minimum_required(VERSION 3.5.0)
project(Dominios)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(Headers)

# Add all source files
file(GLOB SOURCES "Sources/*.cpp")

# Add executable
add_executable(dominios ${SOURCES})