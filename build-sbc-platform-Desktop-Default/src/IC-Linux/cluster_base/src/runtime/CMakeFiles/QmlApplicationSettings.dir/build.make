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
include src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/depend.make

# Include the progress variables for this target.
include src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/progress.make

# Include the compile flags for this target's objects.
include src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/flags.make

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/flags.make
src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o: /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlapplicationsettings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o -c /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlapplicationsettings.cpp

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.i"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlapplicationsettings.cpp > CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.i

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.s"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlapplicationsettings.cpp -o CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.s

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/flags.make
src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o: /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlclusterconfiguration.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o -c /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlclusterconfiguration.cpp

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.i"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlclusterconfiguration.cpp > CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.i

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.s"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime/qmlclusterconfiguration.cpp -o CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.s

# Object files for target QmlApplicationSettings
QmlApplicationSettings_OBJECTS = \
"CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o" \
"CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o"

# External object files for target QmlApplicationSettings
QmlApplicationSettings_EXTERNAL_OBJECTS =

src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlapplicationsettings.cpp.o
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/qmlclusterconfiguration.cpp.o
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/build.make
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/imports/hmi/utils/libQmlUtilsPlugin.so
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/imports/hmi/cluster/libQmlClusterPlugin.so
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Lib/lib/libcluster.so
src/IC-Linux/lib/libQmlApplicationSettings.so: src/V2X/lib/libasn1.so
src/IC-Linux/lib/libQmlApplicationSettings.so: libjsonparse/libjsonparse.so
src/IC-Linux/lib/libQmlApplicationSettings.so: glog/libglog.so.0.4.0
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libgflags.so.2.2.2
src/IC-Linux/lib/libQmlApplicationSettings.so: restclient/librestclient-cpp.so.2.1.1
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libcurl.so
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.2
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.2
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.2
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
src/IC-Linux/lib/libQmlApplicationSettings.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
src/IC-Linux/lib/libQmlApplicationSettings.so: src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vlad/Programming/build-sbc-platform-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../lib/libQmlApplicationSettings.so"
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QmlApplicationSettings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/build: src/IC-Linux/lib/libQmlApplicationSettings.so

.PHONY : src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/build

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime && $(CMAKE_COMMAND) -P CMakeFiles/QmlApplicationSettings.dir/cmake_clean.cmake
.PHONY : src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/clean

src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/runtime /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime /home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/IC-Linux/cluster_base/src/runtime/CMakeFiles/QmlApplicationSettings.dir/depend
