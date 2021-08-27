
cmake_minimum_required(VERSION 3.10)
project(optima-poultry-climate-control CXX)
set(TARGET climate_control)
set(VERSION_FILE_NAME "climate_build_version.h")
set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# Revision info
set(OPTIMA_COMMIT_HASH      "unknown")
find_package(Git)

if(GIT_FOUND)
  execute_process(
    COMMAND ${GIT_EXECUTABLE} log -1 --format=%h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    OUTPUT_VARIABLE OPTIMA_COMMIT_HASH
    OUTPUT_STRIP_TRAILING_WHITESPACE
  )

  message(STATUS "Git commit hash: ${OPTIMA_COMMIT_HASH}")  
else()
  message(STATUS "GIT not found")
endif()
 
string(TIMESTAMP OPTIMA_BUILD_TIMESTAMP "%Y-%m-%d %H:%M:%S")
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/climate_build_version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/include/${TARGET}/${VERSION_FILE_NAME}
    @ONLY)

# CXX compilation options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS} -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# CMake module path
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Vendor installation path
set(EXTERNAL_INSTALL_DIR ${PROJECT_BINARY_DIR}/external)
include_directories(${EXTERNAL_INSTALL_DIR}/include)
link_directories(${EXTERNAL_INSTALL_DIR}/lib)

# Header files
set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtwtypes.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/solver_zc.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ventilation_embedded.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/zero_crossing_types.h
)

# Source files
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ventilation_embedded.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ventilation_embedded_data.cpp    
)

# Test files
file(GLOB TXT_TEST_FILES "tests/*.txt")

# Code formatting
include(clang-format)
clang_format(${TARGET} ${SOURCES} ${HEADERS})

# Library
add_library(${TARGET} STATIC ${HEADERS} ${SOURCES})

# Install
install(FILES ${HEADERS} DESTINATION include/${TARGET})
install(FILES ${TXT_TEST_FILES} DESTINATION include/${TARGET}/test_files)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/lib${TARGET}.a DESTINATION lib)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/include/${TARGET}/${VERSION_FILE_NAME} DESTINATION include/${TARGET})
