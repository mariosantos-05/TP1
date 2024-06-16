cmake_minimum_required(VERSION 3.5.0)
project(Dominios)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(Domains/Headers  Entities/Headers TUD TUE)

# Add all source files
file(GLOB SOURCES "Domains/Sources/*.cpp" "main.cpp" "TUD/*.cpp" "Entities/Sources/*.cpp" "TUE/*.cpp")

# Add executable
add_executable(TP1 ${SOURCES})