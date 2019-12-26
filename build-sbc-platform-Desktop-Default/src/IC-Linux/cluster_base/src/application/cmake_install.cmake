# Install script for directory: /home/vlad/Programming/sbc-platform/src/IC-Linux/cluster_base/src/application

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC"
         RPATH "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/lib:/usr/lib/x86_64-linux-gnu")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/SmartCity_IC")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC"
         OLD_RPATH "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Lib/lib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/glog:/home/vlad/Programming/build-sbc-platform-Desktop-Default/libjsonparse:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/V2X/lib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/lib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/imports/hmi/utils:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/imports/hmi/cluster:/home/vlad/Programming/build-sbc-platform-Desktop-Default/restclient:"
         NEW_RPATH "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/IC-Linux/lib:/usr/lib/x86_64-linux-gnu")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/SmartCity_IC")
    endif()
  endif()
endif()

