# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.0.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.0.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples

# Include any dependencies generated for this target.
include CMakeFiles/Project_simple_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_simple_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_simple_example.dir/flags.make

CMakeFiles/Project_simple_example.dir/simple_example.o: CMakeFiles/Project_simple_example.dir/flags.make
CMakeFiles/Project_simple_example.dir/simple_example.o: simple_example.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Project_simple_example.dir/simple_example.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Project_simple_example.dir/simple_example.o -c /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/simple_example.cpp

CMakeFiles/Project_simple_example.dir/simple_example.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_simple_example.dir/simple_example.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/simple_example.cpp > CMakeFiles/Project_simple_example.dir/simple_example.i

CMakeFiles/Project_simple_example.dir/simple_example.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_simple_example.dir/simple_example.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/simple_example.cpp -o CMakeFiles/Project_simple_example.dir/simple_example.s

CMakeFiles/Project_simple_example.dir/simple_example.o.requires:
.PHONY : CMakeFiles/Project_simple_example.dir/simple_example.o.requires

CMakeFiles/Project_simple_example.dir/simple_example.o.provides: CMakeFiles/Project_simple_example.dir/simple_example.o.requires
	$(MAKE) -f CMakeFiles/Project_simple_example.dir/build.make CMakeFiles/Project_simple_example.dir/simple_example.o.provides.build
.PHONY : CMakeFiles/Project_simple_example.dir/simple_example.o.provides

CMakeFiles/Project_simple_example.dir/simple_example.o.provides.build: CMakeFiles/Project_simple_example.dir/simple_example.o

# Object files for target Project_simple_example
Project_simple_example_OBJECTS = \
"CMakeFiles/Project_simple_example.dir/simple_example.o"

# External object files for target Project_simple_example
Project_simple_example_EXTERNAL_OBJECTS =

Project_simple_example: CMakeFiles/Project_simple_example.dir/simple_example.o
Project_simple_example: CMakeFiles/Project_simple_example.dir/build.make
Project_simple_example: /usr/local/lib/libopencv_highgui.2.4.9.dylib
Project_simple_example: CMakeFiles/Project_simple_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Project_simple_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_simple_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_simple_example.dir/build: Project_simple_example
.PHONY : CMakeFiles/Project_simple_example.dir/build

CMakeFiles/Project_simple_example.dir/requires: CMakeFiles/Project_simple_example.dir/simple_example.o.requires
.PHONY : CMakeFiles/Project_simple_example.dir/requires

CMakeFiles/Project_simple_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_simple_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_simple_example.dir/clean

CMakeFiles/Project_simple_example.dir/depend:
	cd /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/CMakeFiles/Project_simple_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_simple_example.dir/depend

