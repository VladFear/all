cmake_minimum_required(VERSION 3.0)

project(v2x_library_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -fdata-sections -ffunction-sections -fPIC -fpermissive")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O2")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -ggdb -O0")

set(CMAKE_INCLUDE_CURRENT_DIR ON)


if(CMAKE_CROSSCOMPILING)
    include_directories(
        ${ROOTFS_PATH}/usr/include/v2x
        ${ROOTFS_PATH}/usr/include/v2x/asn_src
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        )
    link_directories(${ROOTFS_PATH}/usr/lib)
else()
    include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include/
        ${CMAKE_CURRENT_SOURCE_DIR}/include/asn_src
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        )
    link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
endif()

file(GLOB BINARY_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

file(GLOB BINARY_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    )

set(BINARY_SOURCE_FILES ${BINARY_SOURCES} ${BINARY_HEADERS})

add_executable(${PROJECT_NAME} ${BINARY_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} -lasn1 -pthread)

