cmake_minimum_required(VERSION 3.5.0)
project(Dominios)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/Domains
    ${CMAKE_CURRENT_SOURCE_DIR}/Entities
    ${CMAKE_CURRENT_SOURCE_DIR}/TUD
    ${CMAKE_CURRENT_SOURCE_DIR}/TUE
))

# Add all source files
file(GLOB SOURCES "Domains/Sources/*.cpp" "main.cpp" "TUD/*.cpp" "Entities/Sources/*.cpp" "TUE/*.cpp")

# Add executable
add_executable(TP1 ${SOURCES})