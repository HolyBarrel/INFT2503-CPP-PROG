# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build

# Include any dependencies generated for this target.
include CMakeFiles/temperatures_read.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/temperatures_read.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/temperatures_read.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/temperatures_read.dir/flags.make

CMakeFiles/temperatures_read.dir/main.cpp.o: CMakeFiles/temperatures_read.dir/flags.make
CMakeFiles/temperatures_read.dir/main.cpp.o: /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/main.cpp
CMakeFiles/temperatures_read.dir/main.cpp.o: CMakeFiles/temperatures_read.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/temperatures_read.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/temperatures_read.dir/main.cpp.o -MF CMakeFiles/temperatures_read.dir/main.cpp.o.d -o CMakeFiles/temperatures_read.dir/main.cpp.o -c /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/main.cpp

CMakeFiles/temperatures_read.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/temperatures_read.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/main.cpp > CMakeFiles/temperatures_read.dir/main.cpp.i

CMakeFiles/temperatures_read.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/temperatures_read.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/main.cpp -o CMakeFiles/temperatures_read.dir/main.cpp.s

# Object files for target temperatures_read
temperatures_read_OBJECTS = \
"CMakeFiles/temperatures_read.dir/main.cpp.o"

# External object files for target temperatures_read
temperatures_read_EXTERNAL_OBJECTS =

temperatures_read: CMakeFiles/temperatures_read.dir/main.cpp.o
temperatures_read: CMakeFiles/temperatures_read.dir/build.make
temperatures_read: CMakeFiles/temperatures_read.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable temperatures_read"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/temperatures_read.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/temperatures_read.dir/build: temperatures_read
.PHONY : CMakeFiles/temperatures_read.dir/build

CMakeFiles/temperatures_read.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/temperatures_read.dir/cmake_clean.cmake
.PHONY : CMakeFiles/temperatures_read.dir/clean

CMakeFiles/temperatures_read.dir/depend:
	cd /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build /home/manjaro/Desktop/cpp/clone_github/INFT2503-CPP-PROG/delivery_one/task_b/build/CMakeFiles/temperatures_read.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/temperatures_read.dir/depend

