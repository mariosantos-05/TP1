cmake_minimum_required(VERSION 3.5.0)
project(Dominios)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/Domains
    ${CMAKE_CURRENT_SOURCE_DIR}/Entities
    ${CMAKE_CURRENT_SOURCE_DIR}/Interfaces
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules
    ${CMAKE_CURRENT_SOURCE_DIR}/SGBD
))

# Add all source files
file(GLOB SOURCES "Domains/Sources/*.cpp"  "Entities/Sources/*.cpp" "Modules/MAA/*.cpp" "Modules/MAC/*.cpp" "Modules/MACON/*.cpp" "Modules/MSI/*.cpp")

# Add executable
add_executable(TP1_2 ${SOURCES})