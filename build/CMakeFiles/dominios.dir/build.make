# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lucas/dev/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucas/dev/TP1/build

# Include any dependencies generated for this target.
include CMakeFiles/dominios.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/dominios.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dominios.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dominios.dir/flags.make

CMakeFiles/dominios.dir/Sources/CPF.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/CPF.cpp.o: ../Sources/CPF.cpp
CMakeFiles/dominios.dir/Sources/CPF.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dominios.dir/Sources/CPF.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/CPF.cpp.o -MF CMakeFiles/dominios.dir/Sources/CPF.cpp.o.d -o CMakeFiles/dominios.dir/Sources/CPF.cpp.o -c /home/lucas/dev/TP1/Sources/CPF.cpp

CMakeFiles/dominios.dir/Sources/CPF.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/CPF.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/CPF.cpp > CMakeFiles/dominios.dir/Sources/CPF.cpp.i

CMakeFiles/dominios.dir/Sources/CPF.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/CPF.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/CPF.cpp -o CMakeFiles/dominios.dir/Sources/CPF.cpp.s

CMakeFiles/dominios.dir/Sources/Data.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Data.cpp.o: ../Sources/Data.cpp
CMakeFiles/dominios.dir/Sources/Data.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dominios.dir/Sources/Data.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Data.cpp.o -MF CMakeFiles/dominios.dir/Sources/Data.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Data.cpp.o -c /home/lucas/dev/TP1/Sources/Data.cpp

CMakeFiles/dominios.dir/Sources/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Data.cpp > CMakeFiles/dominios.dir/Sources/Data.cpp.i

CMakeFiles/dominios.dir/Sources/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Data.cpp -o CMakeFiles/dominios.dir/Sources/Data.cpp.s

CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o: ../Sources/Dinheiro.cpp
CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o -MF CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o -c /home/lucas/dev/TP1/Sources/Dinheiro.cpp

CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Dinheiro.cpp > CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.i

CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Dinheiro.cpp -o CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.s

CMakeFiles/dominios.dir/Sources/Estado.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Estado.cpp.o: ../Sources/Estado.cpp
CMakeFiles/dominios.dir/Sources/Estado.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/dominios.dir/Sources/Estado.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Estado.cpp.o -MF CMakeFiles/dominios.dir/Sources/Estado.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Estado.cpp.o -c /home/lucas/dev/TP1/Sources/Estado.cpp

CMakeFiles/dominios.dir/Sources/Estado.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Estado.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Estado.cpp > CMakeFiles/dominios.dir/Sources/Estado.cpp.i

CMakeFiles/dominios.dir/Sources/Estado.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Estado.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Estado.cpp -o CMakeFiles/dominios.dir/Sources/Estado.cpp.s

CMakeFiles/dominios.dir/Sources/Percentual.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Percentual.cpp.o: ../Sources/Percentual.cpp
CMakeFiles/dominios.dir/Sources/Percentual.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/dominios.dir/Sources/Percentual.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Percentual.cpp.o -MF CMakeFiles/dominios.dir/Sources/Percentual.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Percentual.cpp.o -c /home/lucas/dev/TP1/Sources/Percentual.cpp

CMakeFiles/dominios.dir/Sources/Percentual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Percentual.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Percentual.cpp > CMakeFiles/dominios.dir/Sources/Percentual.cpp.i

CMakeFiles/dominios.dir/Sources/Percentual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Percentual.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Percentual.cpp -o CMakeFiles/dominios.dir/Sources/Percentual.cpp.s

CMakeFiles/dominios.dir/Sources/Senha.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Senha.cpp.o: ../Sources/Senha.cpp
CMakeFiles/dominios.dir/Sources/Senha.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/dominios.dir/Sources/Senha.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Senha.cpp.o -MF CMakeFiles/dominios.dir/Sources/Senha.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Senha.cpp.o -c /home/lucas/dev/TP1/Sources/Senha.cpp

CMakeFiles/dominios.dir/Sources/Senha.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Senha.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Senha.cpp > CMakeFiles/dominios.dir/Sources/Senha.cpp.i

CMakeFiles/dominios.dir/Sources/Senha.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Senha.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Senha.cpp -o CMakeFiles/dominios.dir/Sources/Senha.cpp.s

CMakeFiles/dominios.dir/Sources/Setor.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/Setor.cpp.o: ../Sources/Setor.cpp
CMakeFiles/dominios.dir/Sources/Setor.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/dominios.dir/Sources/Setor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/Setor.cpp.o -MF CMakeFiles/dominios.dir/Sources/Setor.cpp.o.d -o CMakeFiles/dominios.dir/Sources/Setor.cpp.o -c /home/lucas/dev/TP1/Sources/Setor.cpp

CMakeFiles/dominios.dir/Sources/Setor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/Setor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/Setor.cpp > CMakeFiles/dominios.dir/Sources/Setor.cpp.i

CMakeFiles/dominios.dir/Sources/Setor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/Setor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/Setor.cpp -o CMakeFiles/dominios.dir/Sources/Setor.cpp.s

CMakeFiles/dominios.dir/Sources/main.cpp.o: CMakeFiles/dominios.dir/flags.make
CMakeFiles/dominios.dir/Sources/main.cpp.o: ../Sources/main.cpp
CMakeFiles/dominios.dir/Sources/main.cpp.o: CMakeFiles/dominios.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/dominios.dir/Sources/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dominios.dir/Sources/main.cpp.o -MF CMakeFiles/dominios.dir/Sources/main.cpp.o.d -o CMakeFiles/dominios.dir/Sources/main.cpp.o -c /home/lucas/dev/TP1/Sources/main.cpp

CMakeFiles/dominios.dir/Sources/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dominios.dir/Sources/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/dev/TP1/Sources/main.cpp > CMakeFiles/dominios.dir/Sources/main.cpp.i

CMakeFiles/dominios.dir/Sources/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dominios.dir/Sources/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/dev/TP1/Sources/main.cpp -o CMakeFiles/dominios.dir/Sources/main.cpp.s

# Object files for target dominios
dominios_OBJECTS = \
"CMakeFiles/dominios.dir/Sources/CPF.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Data.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Estado.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Percentual.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Senha.cpp.o" \
"CMakeFiles/dominios.dir/Sources/Setor.cpp.o" \
"CMakeFiles/dominios.dir/Sources/main.cpp.o"

# External object files for target dominios
dominios_EXTERNAL_OBJECTS =

dominios: CMakeFiles/dominios.dir/Sources/CPF.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Data.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Dinheiro.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Estado.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Percentual.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Senha.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/Setor.cpp.o
dominios: CMakeFiles/dominios.dir/Sources/main.cpp.o
dominios: CMakeFiles/dominios.dir/build.make
dominios: CMakeFiles/dominios.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucas/dev/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable dominios"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dominios.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dominios.dir/build: dominios
.PHONY : CMakeFiles/dominios.dir/build

CMakeFiles/dominios.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dominios.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dominios.dir/clean

CMakeFiles/dominios.dir/depend:
	cd /home/lucas/dev/TP1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/dev/TP1 /home/lucas/dev/TP1 /home/lucas/dev/TP1/build /home/lucas/dev/TP1/build /home/lucas/dev/TP1/build/CMakeFiles/dominios.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dominios.dir/depend

