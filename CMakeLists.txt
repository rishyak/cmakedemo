cmake_minimum_required(VERSION 3.25)

# mbed preamble
set(MBED_PATH ${CMAKE_CURRENT_SOURCE_DIR}/mbed-os CACHE INTERNAL "")
set(MBED_CONFIG_PATH ${CMAKE_CURRENT_BINARY_DIR} CACHE INTERNAL "")
set(APP_TARGET CMakeDemoBlinky)
include(${MBED_PATH}/tools/cmake/app.cmake)

# the project
project(${APP_TARGET} VERSION 1.0.0 LANGUAGES CXX)

# the os
add_subdirectory(${MBED_PATH})

# the app
add_executable(${APP_TARGET})

# compiler options
target_compile_options(${APP_TARGET} PRIVATE -Wall -Wextra -pedantic -Wreorder 
-Wshadow -Wconversion -Wpointer-arith -Wswitch-enum -Wunreachable-code)
target_compile_features(${APP_TARGET} PRIVATE cxx_std_23)

# the include directory
target_include_directories(${APP_TARGET} PRIVATE include)

# source files
add_subdirectory(src)

target_link_libraries(${APP_TARGET} PRIVATE mbed-os)

# some important mbed thing, they don't explain it
# or I haven't looked hard enough
mbed_set_post_build(${APP_TARGET})
