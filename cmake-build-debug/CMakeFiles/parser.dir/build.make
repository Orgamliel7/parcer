# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /mnt/c/אור/‏‏parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/אור/‏‏parser/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/parser.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/parser.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/parser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parser.dir/flags.make

CMakeFiles/parser.dir/main.cpp.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/main.cpp.o: ../main.cpp
CMakeFiles/parser.dir/main.cpp.o: CMakeFiles/parser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/אור/‏‏parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/parser.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/parser.dir/main.cpp.o -MF CMakeFiles/parser.dir/main.cpp.o.d -o CMakeFiles/parser.dir/main.cpp.o -c /mnt/c/אור/‏‏parser/main.cpp

CMakeFiles/parser.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/אור/‏‏parser/main.cpp > CMakeFiles/parser.dir/main.cpp.i

CMakeFiles/parser.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/אור/‏‏parser/main.cpp -o CMakeFiles/parser.dir/main.cpp.s

CMakeFiles/parser.dir/symbol.cpp.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/symbol.cpp.o: ../symbol.cpp
CMakeFiles/parser.dir/symbol.cpp.o: CMakeFiles/parser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/אור/‏‏parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/parser.dir/symbol.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/parser.dir/symbol.cpp.o -MF CMakeFiles/parser.dir/symbol.cpp.o.d -o CMakeFiles/parser.dir/symbol.cpp.o -c /mnt/c/אור/‏‏parser/symbol.cpp

CMakeFiles/parser.dir/symbol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser.dir/symbol.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/אור/‏‏parser/symbol.cpp > CMakeFiles/parser.dir/symbol.cpp.i

CMakeFiles/parser.dir/symbol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser.dir/symbol.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/אור/‏‏parser/symbol.cpp -o CMakeFiles/parser.dir/symbol.cpp.s

CMakeFiles/parser.dir/parser.cpp.o: CMakeFiles/parser.dir/flags.make
CMakeFiles/parser.dir/parser.cpp.o: ../parser.cpp
CMakeFiles/parser.dir/parser.cpp.o: CMakeFiles/parser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/אור/‏‏parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/parser.dir/parser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/parser.dir/parser.cpp.o -MF CMakeFiles/parser.dir/parser.cpp.o.d -o CMakeFiles/parser.dir/parser.cpp.o -c /mnt/c/אור/‏‏parser/parser.cpp

CMakeFiles/parser.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser.dir/parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/אור/‏‏parser/parser.cpp > CMakeFiles/parser.dir/parser.cpp.i

CMakeFiles/parser.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser.dir/parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/אור/‏‏parser/parser.cpp -o CMakeFiles/parser.dir/parser.cpp.s

# Object files for target parser
parser_OBJECTS = \
"CMakeFiles/parser.dir/main.cpp.o" \
"CMakeFiles/parser.dir/symbol.cpp.o" \
"CMakeFiles/parser.dir/parser.cpp.o"

# External object files for target parser
parser_EXTERNAL_OBJECTS =

parser: CMakeFiles/parser.dir/main.cpp.o
parser: CMakeFiles/parser.dir/symbol.cpp.o
parser: CMakeFiles/parser.dir/parser.cpp.o
parser: CMakeFiles/parser.dir/build.make
parser: CMakeFiles/parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/אור/‏‏parser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable parser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parser.dir/build: parser
.PHONY : CMakeFiles/parser.dir/build

CMakeFiles/parser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/parser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/parser.dir/clean

CMakeFiles/parser.dir/depend:
	cd /mnt/c/אור/‏‏parser/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/אור/‏‏parser /mnt/c/אור/‏‏parser /mnt/c/אור/‏‏parser/cmake-build-debug /mnt/c/אור/‏‏parser/cmake-build-debug /mnt/c/אור/‏‏parser/cmake-build-debug/CMakeFiles/parser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/parser.dir/depend

