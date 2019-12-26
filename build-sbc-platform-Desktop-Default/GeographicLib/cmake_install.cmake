# Install script for directory: /home/vlad/Programming/sbc-platform/lib/GeographicLib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/src/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/include/GeographicLib/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/man/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/doc/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/js/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/matlab/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/python/geographiclib/cmake_install.cmake")
  include("/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/cmake/cmake_install.cmake")

endif()

