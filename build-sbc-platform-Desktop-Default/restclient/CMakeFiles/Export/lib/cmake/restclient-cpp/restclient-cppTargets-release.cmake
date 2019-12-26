#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "restclient-cpp" for configuration "Release"
set_property(TARGET restclient-cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(restclient-cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librestclient-cpp.so.2.1.1"
  IMPORTED_SONAME_RELEASE "librestclient-cpp.so.2.1.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS restclient-cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_restclient-cpp "${_IMPORT_PREFIX}/lib/librestclient-cpp.so.2.1.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
