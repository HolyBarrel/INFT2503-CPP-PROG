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
CMAKE_SOURCE_DIR = /home/oo/INFT2503-CPP-PROG/delivery_nine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oo/INFT2503-CPP-PROG/delivery_nine/build

# Include any dependencies generated for this target.
include CMakeFiles/stl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/stl.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stl.dir/flags.make

CMakeFiles/stl.dir/main.cpp.o: CMakeFiles/stl.dir/flags.make
CMakeFiles/stl.dir/main.cpp.o: ../main.cpp
CMakeFiles/stl.dir/main.cpp.o: CMakeFiles/stl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oo/INFT2503-CPP-PROG/delivery_nine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stl.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/stl.dir/main.cpp.o -MF CMakeFiles/stl.dir/main.cpp.o.d -o CMakeFiles/stl.dir/main.cpp.o -c /home/oo/INFT2503-CPP-PROG/delivery_nine/main.cpp

CMakeFiles/stl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stl.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oo/INFT2503-CPP-PROG/delivery_nine/main.cpp > CMakeFiles/stl.dir/main.cpp.i

CMakeFiles/stl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stl.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oo/INFT2503-CPP-PROG/delivery_nine/main.cpp -o CMakeFiles/stl.dir/main.cpp.s

# Object files for target stl
stl_OBJECTS = \
"CMakeFiles/stl.dir/main.cpp.o"

# External object files for target stl
stl_EXTERNAL_OBJECTS =

stl: CMakeFiles/stl.dir/main.cpp.o
stl: CMakeFiles/stl.dir/build.make
stl: CMakeFiles/stl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oo/INFT2503-CPP-PROG/delivery_nine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stl.dir/build: stl
.PHONY : CMakeFiles/stl.dir/build

CMakeFiles/stl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stl.dir/clean

CMakeFiles/stl.dir/depend:
	cd /home/oo/INFT2503-CPP-PROG/delivery_nine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oo/INFT2503-CPP-PROG/delivery_nine /home/oo/INFT2503-CPP-PROG/delivery_nine /home/oo/INFT2503-CPP-PROG/delivery_nine/build /home/oo/INFT2503-CPP-PROG/delivery_nine/build /home/oo/INFT2503-CPP-PROG/delivery_nine/build/CMakeFiles/stl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stl.dir/depend

