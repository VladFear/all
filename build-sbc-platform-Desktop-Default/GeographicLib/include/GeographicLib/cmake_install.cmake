# Install script for directory: /home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/GeographicLib" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Accumulator.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/AlbersEqualArea.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/AzimuthalEquidistant.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/CassiniSoldner.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/CircularEngine.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Constants.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/DMS.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Ellipsoid.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/EllipticFunction.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GARS.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GeoCoords.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Geocentric.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Geodesic.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GeodesicExact.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GeodesicLine.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GeodesicLineExact.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Geohash.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Geoid.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Georef.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Gnomonic.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GravityCircle.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/GravityModel.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/LambertConformalConic.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/LocalCartesian.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/MGRS.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/MagneticCircle.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/MagneticModel.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Math.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/NearestNeighbor.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/NormalGravity.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/OSGB.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/PolarStereographic.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/PolygonArea.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Rhumb.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/SphericalEngine.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/SphericalHarmonic.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/SphericalHarmonic1.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/SphericalHarmonic2.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/TransverseMercator.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/TransverseMercatorExact.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/UTMUPS.hpp"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/include/GeographicLib/Utility.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/GeographicLib" TYPE FILE FILES "/home/vlad/Programming/build-sbc-platform-Desktop-Default/GeographicLib/include/GeographicLib/Config.h")
endif()

