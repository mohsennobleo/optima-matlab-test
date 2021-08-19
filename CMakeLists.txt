cmake_minimum_required(VERSION 3.10)
project(optima-poultry-climate-control CXX)
set(TARGET climate_control)

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

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

# Code formatting
include(clang-format)

# Code coverage generation
if(ENABLE_CODE_COVERAGE)
    include(code-coverage)
    append_coverage_compiler_flags()
endif()

# Static code analysis
if(ENABLE_CODE_ANALYSIS)
    if (ENABLE_CPPCHECK)
        message(STATUS "Attempting to find code analysis tools:")
        find_program(CMAKE_CXX_CPPCHECK NAMES cppcheck)
        if(CMAKE_CXX_CPPCHECK)
            message(STATUS "- Found `cppcheck`")
            list(APPEND CMAKE_CXX_CPPCHECK
                "--enable=all"
                "--suppress=missingIncludeSystem"
                "--inline-suppr"
                "--force"
                "--suppressions-list=${CMAKE_SOURCE_DIR}/.cppcheck-suppressions"
            )
        endif()
    endif()

    if (ENABLE_CLANG_TIDY)
        find_program(CMAKE_CXX_CLANG_TIDY NAMES clang-tidy)
        if(CMAKE_CXX_CPPCHECK)
            message(STATUS "- Found `clang-tidy`")
            list(APPEND CMAKE_CXX_CLANG_TIDY
                "-header-filter=${CMAKE_SOURCE_DIR}/include"
                "-checks=*"
            )
        endif()
    endif()
endif()



set(INCLUDE_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Library
set(SOURCES
    ${INCLUDE_PREFIX}/rtwtypes.h
    ${INCLUDE_PREFIX}/solver_zc.h
    ${INCLUDE_PREFIX}/ventilation_embedded.h
    ${INCLUDE_PREFIX}/zero_crossing_types.h
    ${INCLUDE_PREFIX}/ventilation_embedded.cpp
    ${INCLUDE_PREFIX}/ventilation_embedded_data.cpp    
)

add_library(${TARGET} STATIC ${SOURCES})
# target_include_directories(${TARGET} STATIC ${HEADERS})
# clang_format(${TARGET} ${HEADERS})
# clang_format(${TARGET} ${SOURCES})

# Configure install targets
include(GNUInstallDirs)
install(DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
)
# install(DIRECTORY src/
#     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
#     FILES_MATCHING PATTERN "*.cpp"
# )
# install(DIRECTORY lib/
#     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
#     FILES_MATCHING PATTERN "*.a"
# )
install(FILES ${HEADERS} DESTINATION include/${TARGET})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/lib${TARGET}.a DESTINATION lib)


# cmake_minimum_required(VERSION 3.10)
# project(optima-poultry-climate-control)

# set(TARGET climate)

# set(SOURCE_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/src)
# set(INCLUDE_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/include)

# set(HEADERS ${INCLUDE_PREFIX}/
#     rtwtypes.h
#     solver_zc.h
#     ventilation_embedded.h
#     zero_crossing_types.h
# )

# set(SOURCES ${SOURCE_PREFIX}/
#     ${CMAKE_CURRENT_SOURCE_DIR}/src/ventilation_embedded.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/src/ventilation_embedded_data.cpp
# )

# add_library(${TARGET} STATIC ${SOURCES} ${HEADERS})

# install(FILES ${HEADERS} DESTINATION include/${TARGET})
# install(FILES ${CMAKE_CURRENT_BINARY_DIR}/lib${TARGET}.a DESTINATION lib)