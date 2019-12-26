# Install script for directory: /home/vlad/Programming/sbc-platform/src/EmulationServer

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/eserver")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver"
         OLD_RPATH "/home/vlad/Programming/build-sbc-platform-Desktop-Default:/home/vlad/Programming/build-sbc-platform-Desktop-Default/glog:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/V2X:/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/V2X/lib:/home/vlad/Programming/sbc-platform/src/V2X/src/asnlib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/jsonparse:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/glog:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/v2x:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer:/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/src:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/eserver")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/libccu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so"
         OLD_RPATH "/home/vlad/Programming/build-sbc-platform-Desktop-Default:/home/vlad/Programming/build-sbc-platform-Desktop-Default/glog:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/V2X:/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/V2X/lib:/home/vlad/Programming/sbc-platform/src/V2X/src/asnlib:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/jsonparse:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/glog:/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/v2x:/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/src:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libccu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vws" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/config_for_unittests.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/demangle.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/glog/log_severity.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/googletest.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/mock-log.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_generic-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_libunwind-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_powerpc-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_windows-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_x86-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/stacktrace_x86_64-inl.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/symbolize.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/../../lib/glog/src/utilities.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/autopilot.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/carControlUnit.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/control/control.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/control/gpsPoints.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/control/movement.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/converter.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/objects/car.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/objects/object.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/objects/pedestrian.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/objects/roadElement.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/objects/trafficLight.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/state/carState.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/elements/state/objectState.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/glogwrapper.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/json.hpp"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/keywords.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/logger.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/mathEngine.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/ccu/inc/versionLib.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/rsu/inc/intersectionTrafficLight.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/rsu/inc/intersectionTrafficLightSet.h"
    "/home/vlad/Programming/sbc-platform/src/EmulationServer/rsu/inc/roadSideUnit.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vws" TYPE FILE FILES
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/cars/car_1.json"
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/cars/car_2.json"
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/cars/car_emergency.json"
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/src/EmulationServer/rsu/rsu_1.json"
    )
endif()

