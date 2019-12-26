# Install script for directory: /home/vlad/Programming/sbc-platform/lib/GeographicLib/js

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/node_modules/geographiclib" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/../LICENSE.txt"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/package.json"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/README.md"
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/js/geographiclib.js"
    "/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/js/geographiclib.min.js"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/node_modules/geographiclib/src" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/src/Math.js"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/src/Geodesic.js"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/src/GeodesicLine.js"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/src/PolygonArea.js"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/src/DMS.js"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/node_modules/geographiclib/test" TYPE FILE FILES "/home/vlad/Programming/sbc-platform/lib/GeographicLib/js/test/geodesictest.js")
endif()

