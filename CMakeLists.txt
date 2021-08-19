cmake_minimum_required(VERSION 3.10)
project(optima-poultry-climate-control CXX)
set(APP_LIBRARY optima-poultry-climate-control)

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# CXX compilation options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS} -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# Library
target_include_directories(${APP_LIBRARY} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(APP_LIBRARY_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ventilation_embedded.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ventilation_embedded_data.cpp
)
add_library(${APP_LIBRARY} INTERFACE ${APP_LIBRARY_SOURCES} )





cmake_minimum_required(VERSION 3.10)
project(optima-poultry-climate-control CXX)

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# Build options
option(ENABLE_DOCS             "Enable documentation target"                OFF)
option(ENABLE_CODE_COVERAGE    "Enable code coverage generation"            OFF)
option(ENABLE_CODE_ANALYSIS    "Enable static code analysis"                OFF)
option(ENABLE_CPPCHECK         "Enable cppcheck for static code analysis"   OFF)
option(ENABLE_CLANG_TIDY       "Enable clang-tidy for static code analysis" OFF)
option(BUILD_TESTS             "Build unittest binary"                      OFF)
option(BUILD_BENCHMARK         "Build benchmark binary"                     OFF)

# CXX compilation options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS} -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# Vendor installation path
set(EXTERNAL_INSTALL_DIR ${PROJECT_BINARY_DIR}/external)
include_directories(${EXTERNAL_INSTALL_DIR}/include)
link_directories(${EXTERNAL_INSTALL_DIR}/lib)


# Library
set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/include/rtti.hh)
add_library(optima-poultry-climate-control INTERFACE)
target_include_directories(optima-poultry-climate-control INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Configure install targets
include(GNUInstallDirs)
install(DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
)