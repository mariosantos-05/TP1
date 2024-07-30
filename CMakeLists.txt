cmake_minimum_required(VERSION 3.10.0)
project(TP1_2)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the ncurses library
find_package(Curses REQUIRED)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/Domains
    ${CMAKE_CURRENT_SOURCE_DIR}/Entities
    ${CMAKE_CURRENT_SOURCE_DIR}/Interfaces
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules
    ${CMAKE_CURRENT_SOURCE_DIR}/SGBD
    ${CURSES_INCLUDE_DIR} # Include directory for ncurses
)

# Add all source files
file(GLOB SOURCES 
    "Domains/Sources/*.cpp"  
    "Entities/Sources/*.cpp" 
    "Modules/*.cpp"
    "Modules/MAA/MAA.cpp" 
    "Modules/MAC/MAC.cpp" 
    "Modules/MACON/MACON.cpp"
    "Modules/MACON/MSI.cpp"
    "main.cpp"
    "SGBD/Inv_Peristence_Unit.cpp"
)

# Add executable
add_executable(TP1_2 ${SOURCES})

# Link ncurses library
target_link_libraries(TP1_2 ${CURSES_LIBRARIES})
