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

# Utility rule file for BeginMessage.

# Include the progress variables for this target.
include restclient/CMakeFiles/BeginMessage.dir/progress.make

restclient/CMakeFiles/BeginMessage:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Compile Info"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/restclient && /usr/bin/cmake -E cmake_echo_color --white Compiling\ for:\ Release

BeginMessage: restclient/CMakeFiles/BeginMessage
BeginMessage: restclient/CMakeFiles/BeginMessage.dir/build.make

.PHONY : BeginMessage

# Rule to build all files generated by this target.
restclient/CMakeFiles/BeginMessage.dir/build: BeginMessage

.PHONY : restclient/CMakeFiles/BeginMessage.dir/build

restclient/CMakeFiles/BeginMessage.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/restclient && $(CMAKE_COMMAND) -P CMakeFiles/BeginMessage.dir/cmake_clean.cmake
.PHONY : restclient/CMakeFiles/BeginMessage.dir/clean

restclient/CMakeFiles/BeginMessage.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/lib/restclient-cpp /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/restclient /home/vlad/Programming/build-sbc-platform-Desktop-Default/restclient/CMakeFiles/BeginMessage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : restclient/CMakeFiles/BeginMessage.dir/depend
