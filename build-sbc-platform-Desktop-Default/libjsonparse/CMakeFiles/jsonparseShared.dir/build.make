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
include libjsonparse/CMakeFiles/jsonparseShared.dir/depend.make

# Include the progress variables for this target.
include libjsonparse/CMakeFiles/jsonparseShared.dir/progress.make

# Include the compile flags for this target's objects.
include libjsonparse/CMakeFiles/jsonparseShared.dir/flags.make

libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o: libjsonparse/CMakeFiles/jsonparseShared.dir/flags.make
libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o: /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/ccan_json.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o   -c /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/ccan_json.c

libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonparseShared.dir/src/ccan_json.c.i"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/ccan_json.c > CMakeFiles/jsonparseShared.dir/src/ccan_json.c.i

libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonparseShared.dir/src/ccan_json.c.s"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/ccan_json.c -o CMakeFiles/jsonparseShared.dir/src/ccan_json.c.s

libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.o: libjsonparse/CMakeFiles/jsonparseShared.dir/flags.make
libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.o: /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.o"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/jsonparseShared.dir/src/util.c.o   -c /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/util.c

libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonparseShared.dir/src/util.c.i"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/util.c > CMakeFiles/jsonparseShared.dir/src/util.c.i

libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonparseShared.dir/src/util.c.s"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/Programming/sbc-platform/lib/libjsonparse/src/util.c -o CMakeFiles/jsonparseShared.dir/src/util.c.s

# Object files for target jsonparseShared
jsonparseShared_OBJECTS = \
"CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o" \
"CMakeFiles/jsonparseShared.dir/src/util.c.o"

# External object files for target jsonparseShared
jsonparseShared_EXTERNAL_OBJECTS =

libjsonparse/libjsonparse.so: libjsonparse/CMakeFiles/jsonparseShared.dir/src/ccan_json.c.o
libjsonparse/libjsonparse.so: libjsonparse/CMakeFiles/jsonparseShared.dir/src/util.c.o
libjsonparse/libjsonparse.so: libjsonparse/CMakeFiles/jsonparseShared.dir/build.make
libjsonparse/libjsonparse.so: libjsonparse/CMakeFiles/jsonparseShared.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library libjsonparse.so"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jsonparseShared.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libjsonparse/CMakeFiles/jsonparseShared.dir/build: libjsonparse/libjsonparse.so

.PHONY : libjsonparse/CMakeFiles/jsonparseShared.dir/build

libjsonparse/CMakeFiles/jsonparseShared.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse && $(CMAKE_COMMAND) -P CMakeFiles/jsonparseShared.dir/cmake_clean.cmake
.PHONY : libjsonparse/CMakeFiles/jsonparseShared.dir/clean

libjsonparse/CMakeFiles/jsonparseShared.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/lib/libjsonparse /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse /home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse/CMakeFiles/jsonparseShared.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libjsonparse/CMakeFiles/jsonparseShared.dir/depend

