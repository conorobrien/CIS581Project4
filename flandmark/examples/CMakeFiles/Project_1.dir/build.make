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
include CMakeFiles/Project_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_1.dir/flags.make

CMakeFiles/Project_1.dir/example1.o: CMakeFiles/Project_1.dir/flags.make
CMakeFiles/Project_1.dir/example1.o: example1.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Project_1.dir/example1.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Project_1.dir/example1.o -c /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/example1.cpp

CMakeFiles/Project_1.dir/example1.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_1.dir/example1.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/example1.cpp > CMakeFiles/Project_1.dir/example1.i

CMakeFiles/Project_1.dir/example1.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_1.dir/example1.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/example1.cpp -o CMakeFiles/Project_1.dir/example1.s

CMakeFiles/Project_1.dir/example1.o.requires:
.PHONY : CMakeFiles/Project_1.dir/example1.o.requires

CMakeFiles/Project_1.dir/example1.o.provides: CMakeFiles/Project_1.dir/example1.o.requires
	$(MAKE) -f CMakeFiles/Project_1.dir/build.make CMakeFiles/Project_1.dir/example1.o.provides.build
.PHONY : CMakeFiles/Project_1.dir/example1.o.provides

CMakeFiles/Project_1.dir/example1.o.provides.build: CMakeFiles/Project_1.dir/example1.o

# Object files for target Project_1
Project_1_OBJECTS = \
"CMakeFiles/Project_1.dir/example1.o"

# External object files for target Project_1
Project_1_EXTERNAL_OBJECTS =

Project_1: CMakeFiles/Project_1.dir/example1.o
Project_1: CMakeFiles/Project_1.dir/build.make
Project_1: /usr/local/lib/libopencv_highgui.2.4.9.dylib
Project_1: /usr/local/lib/libopencv_core.2.4.9.dylib
Project_1: /usr/local/lib/libopencv_objdetect.2.4.9.dylib
Project_1: /usr/local/lib/libopencv_highgui.2.4.9.dylib
Project_1: /usr/local/lib/libopencv_imgproc.2.4.9.dylib
Project_1: /usr/local/lib/libopencv_core.2.4.9.dylib
Project_1: CMakeFiles/Project_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Project_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_1.dir/build: Project_1
.PHONY : CMakeFiles/Project_1.dir/build

CMakeFiles/Project_1.dir/requires: CMakeFiles/Project_1.dir/example1.o.requires
.PHONY : CMakeFiles/Project_1.dir/requires

CMakeFiles/Project_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_1.dir/clean

CMakeFiles/Project_1.dir/depend:
	cd /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples /Users/conor/Documents/MATLAB/CIS581/CIS581Project4/flandmark/examples/CMakeFiles/Project_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_1.dir/depend
