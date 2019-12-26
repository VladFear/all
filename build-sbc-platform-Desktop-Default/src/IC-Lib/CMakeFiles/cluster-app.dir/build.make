# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/vlad/Programming/sbc-platform

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vlad/Programming/build-sbc-platform-Desktop-Default

# Include any dependencies generated for this target.
include src/IC-Lib/CMakeFiles/cluster-app.dir/depend.make

# Include the progress variables for this target.
include src/IC-Lib/CMakeFiles/cluster-app.dir/progress.make

# Include the compile flags for this target's objects.
include src/IC-Lib/CMakeFiles/cluster-app.dir/flags.make

src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.o: src/IC-Lib/CMakeFiles/cluster-app.dir/flags.make
src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.o: /home/vlad/Programming/sbc-platform/src/IC-Lib/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.o"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cluster-app.dir/src/main.cpp.o -c /home/vlad/Programming/sbc-platform/src/IC-Lib/src/main.cpp

src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cluster-app.dir/src/main.cpp.i"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vlad/Programming/sbc-platform/src/IC-Lib/src/main.cpp > CMakeFiles/cluster-app.dir/src/main.cpp.i

src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cluster-app.dir/src/main.cpp.s"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vlad/Programming/sbc-platform/src/IC-Lib/src/main.cpp -o CMakeFiles/cluster-app.dir/src/main.cpp.s

# Object files for target cluster-app
cluster__app_OBJECTS = \
"CMakeFiles/cluster-app.dir/src/main.cpp.o"

# External object files for target cluster-app
cluster__app_EXTERNAL_OBJECTS =

src/IC-Lib/cluster-app: src/IC-Lib/CMakeFiles/cluster-app.dir/src/main.cpp.o
src/IC-Lib/cluster-app: src/IC-Lib/CMakeFiles/cluster-app.dir/build.make
src/IC-Lib/cluster-app: src/IC-Lib/lib/libcluster.so
src/IC-Lib/cluster-app: src/V2X/lib/libasn1.so
src/IC-Lib/cluster-app: libjsonparse/libjsonparse.so
src/IC-Lib/cluster-app: glog/libglog.so.0.4.0
src/IC-Lib/cluster-app: restclient/librestclient-cpp.so.2.1.1
src/IC-Lib/cluster-app: /usr/lib/x86_64-linux-gnu/libgflags.so.2.2.2
src/IC-Lib/cluster-app: /usr/lib/x86_64-linux-gnu/libcurl.so
src/IC-Lib/cluster-app: src/IC-Lib/CMakeFiles/cluster-app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cluster-app"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cluster-app.dir/link.txt --verbose=$(VERBOSE)
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && bash -c /home/vlad/Programming/sbc-platform/src/IC-Lib/../../copy_lib_dependencies.sh\ /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib/cluster-app\ /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib/lib

# Rule to build all files generated by this target.
src/IC-Lib/CMakeFiles/cluster-app.dir/build: src/IC-Lib/cluster-app

.PHONY : src/IC-Lib/CMakeFiles/cluster-app.dir/build

src/IC-Lib/CMakeFiles/cluster-app.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib && $(CMAKE_COMMAND) -P CMakeFiles/cluster-app.dir/cmake_clean.cmake
.PHONY : src/IC-Lib/CMakeFiles/cluster-app.dir/clean

src/IC-Lib/CMakeFiles/cluster-app.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/src/IC-Lib /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib/CMakeFiles/cluster-app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/IC-Lib/CMakeFiles/cluster-app.dir/depend

