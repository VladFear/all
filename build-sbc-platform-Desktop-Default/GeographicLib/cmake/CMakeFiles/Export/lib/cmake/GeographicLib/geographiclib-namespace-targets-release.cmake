#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "GeographicLib::GeographicLib_SHARED" for configuration "Release"
set_property(TARGET GeographicLib::GeographicLib_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(GeographicLib::GeographicLib_SHARED PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGeographic.so.19.0.0"
  IMPORTED_SONAME_RELEASE "libGeographic.so.19"
  )

list(APPEND _IMPORT_CHECK_TARGETS GeographicLib::GeographicLib_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_GeographicLib::GeographicLib_SHARED "${_IMPORT_PREFIX}/lib/libGeographic.so.19.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
