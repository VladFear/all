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

# Utility rule file for dist.

# Include the progress variables for this target.
include GeographicLib/CMakeFiles/dist.dir/progress.make

GeographicLib/CMakeFiles/dist:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && /usr/bin/make package_source
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && cd _CPack_Packages/Linux-Source/TGZ/GeographicLib-1.50 && echo include Makefile.mk > Makefile && sed -e s/Unconfigured/1.50/ -e s/MAJOR\ .*/MAJOR\ 1/ -e s/MINOR\ .*/MINOR\ 50/ -e s/PATCH\ .*/PATCH\ 0/ include/GeographicLib/Config.h > include/GeographicLib/Config.h.new && mv include/GeographicLib/Config.h.new include/GeographicLib/Config.h
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && cd _CPack_Packages/Linux-Source/TGZ/GeographicLib-1.50 && touch man/[A-Za-z]*.usage man/[A-Za-z]*.1 man/[A-Za-z]*.1.html && chmod -R g-w .
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && cd _CPack_Packages/Linux-Source/TGZ && find GeographicLib-1.50 -type f | tar cfzT /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib-1.50.tar.gz -
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && rm -f /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib-1.50.zip && rsync -a --delete _CPack_Packages/Linux-Source/TGZ/GeographicLib-1.50 _CPack_Packages/Linux-Source/TGZ.DOS/ && cd _CPack_Packages/Linux-Source/TGZ.DOS && find . -type f | egrep -v '/(compile|config[^/]*|depcomp|install-sh|missing|[Mm]akefile[^/]*|[^/]*\.(ac|am|csproj|eps|kmz|m4|pdf|png|resx|settings|sh|sln|vcproj|vcxproj))$$' | xargs unix2dos -q -k && find GeographicLib-1.50 -type f | zip -q /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib-1.50.zip -@

dist: GeographicLib/CMakeFiles/dist
dist: GeographicLib/CMakeFiles/dist.dir/build.make

.PHONY : dist

# Rule to build all files generated by this target.
GeographicLib/CMakeFiles/dist.dir/build: dist

.PHONY : GeographicLib/CMakeFiles/dist.dir/build

GeographicLib/CMakeFiles/dist.dir/clean:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib && $(CMAKE_COMMAND) -P CMakeFiles/dist.dir/cmake_clean.cmake
.PHONY : GeographicLib/CMakeFiles/dist.dir/clean

GeographicLib/CMakeFiles/dist.dir/depend:
	cd /home/vlad/Programming/build-sbc-platform-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/Programming/sbc-platform /home/vlad/Programming/sbc-platform/lib/GeographicLib /home/vlad/Programming/build-sbc-platform-Desktop-Default /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib /home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/CMakeFiles/dist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GeographicLib/CMakeFiles/dist.dir/depend

