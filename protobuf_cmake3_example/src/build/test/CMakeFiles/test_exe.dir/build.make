# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build

# Include any dependencies generated for this target.
include test/CMakeFiles/test_exe.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_exe.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_exe.dir/flags.make

test/CMakeFiles/test_exe.dir/main.cc.o: test/CMakeFiles/test_exe.dir/flags.make
test/CMakeFiles/test_exe.dir/main.cc.o: ../test/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_exe.dir/main.cc.o"
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_exe.dir/main.cc.o -c /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/test/main.cc

test/CMakeFiles/test_exe.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_exe.dir/main.cc.i"
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/test/main.cc > CMakeFiles/test_exe.dir/main.cc.i

test/CMakeFiles/test_exe.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_exe.dir/main.cc.s"
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/test/main.cc -o CMakeFiles/test_exe.dir/main.cc.s

test/CMakeFiles/test_exe.dir/main.cc.o.requires:

.PHONY : test/CMakeFiles/test_exe.dir/main.cc.o.requires

test/CMakeFiles/test_exe.dir/main.cc.o.provides: test/CMakeFiles/test_exe.dir/main.cc.o.requires
	$(MAKE) -f test/CMakeFiles/test_exe.dir/build.make test/CMakeFiles/test_exe.dir/main.cc.o.provides.build
.PHONY : test/CMakeFiles/test_exe.dir/main.cc.o.provides

test/CMakeFiles/test_exe.dir/main.cc.o.provides.build: test/CMakeFiles/test_exe.dir/main.cc.o


# Object files for target test_exe
test_exe_OBJECTS = \
"CMakeFiles/test_exe.dir/main.cc.o"

# External object files for target test_exe
test_exe_EXTERNAL_OBJECTS =

test/test_exe: test/CMakeFiles/test_exe.dir/main.cc.o
test/test_exe: test/CMakeFiles/test_exe.dir/build.make
test/test_exe: protobufs/libprotos.a
test/test_exe: /usr/local/lib/libprotobuf.so
test/test_exe: test/CMakeFiles/test_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_exe"
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_exe.dir/build: test/test_exe

.PHONY : test/CMakeFiles/test_exe.dir/build

test/CMakeFiles/test_exe.dir/requires: test/CMakeFiles/test_exe.dir/main.cc.o.requires

.PHONY : test/CMakeFiles/test_exe.dir/requires

test/CMakeFiles/test_exe.dir/clean:
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test_exe.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_exe.dir/clean

test/CMakeFiles/test_exe.dir/depend:
	cd /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/test /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test /home/hinson/Desktop/TestCode/protobuf_cmake3_example/src/build/test/CMakeFiles/test_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_exe.dir/depend
