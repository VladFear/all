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

# Utility rule file for man.

# Include the progress variables for this target.
include GeographicLib/man/CMakeFiles/man.dir/progress.make

man: GeographicLib/man/CMakeFiles/man.dir/build.make

.PHONY : man

# Rule to build all files generated by this target.
GeographicLib/man/CMakeFiles/man.dir/build: man

.PHONY : GeographicLib/man/CMakeFiles/man.dir/build

GeographicLib/man/CMakeFiles/man.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/man && $(CMAKE_COMMAND) -P CMakeFiles/man.dir/cmake_clean.cmake
.PHONY : GeographicLib/man/CMakeFiles/man.dir/clean

GeographicLib/man/CMakeFiles/man.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/lib/GeographicLib/man /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/man /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/man/CMakeFiles/man.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GeographicLib/man/CMakeFiles/man.dir/depend

