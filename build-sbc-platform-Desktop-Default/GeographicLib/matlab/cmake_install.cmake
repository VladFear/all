# Install script for directory: /home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/matlab/geographiclib" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/Contents.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/cassini_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/cassini_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/defaultellipsoid.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/ecc2flat.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/eqdazim_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/eqdazim_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/flat2ecc.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/gedistance.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/gedoc.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geocent_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geocent_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geodarea.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geoddistance.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geoddoc.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geodreckon.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geographiclib_test.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geoid_height.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/geoid_load.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/gereckon.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/gnomonic_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/gnomonic_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/loccart_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/loccart_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/mgrs_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/mgrs_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/polarst_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/polarst_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/projdoc.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/tranmerc_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/tranmerc_inv.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/utmups_fwd.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/utmups_inv.m"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/matlab/geographiclib/private" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/A1m1f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/A2m1f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/A3coeff.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/A3f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/AngDiff.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/AngNormalize.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/AngRound.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C1f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C1pf.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C2f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C3coeff.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C3f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C4coeff.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/C4f.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/G4coeff.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/GeoRotation.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/LatFix.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/SinCosSeries.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/atan2dx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/cbrtx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/copysignx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/cvmgt.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/eatanhe.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/geoid_file.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/geoid_load_file.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/norm2.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/remx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/sincosdx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/sumx.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/swap.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/tauf.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib/private/taupf.m"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/matlab/geographiclib-legacy" TYPE FILE FILES
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/Contents.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geocentricforward.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geocentricreverse.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geodesicdirect.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geodesicinverse.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geodesicline.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/geoidheight.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/localcartesianforward.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/localcartesianreverse.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/mgrsforward.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/mgrsreverse.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/polygonarea.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/utmupsforward.m"
    "/home/vlad/Programming/sbc-platform/lib/GeographicLib/matlab/geographiclib-legacy/utmupsreverse.m"
    )
endif()

