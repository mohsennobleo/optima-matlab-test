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
