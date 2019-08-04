cmake_minimum_required(VERSION 3.1)
project(RainFall VERSION 0.1.0)

# We want C++11
set (CMAKE_CXX_STANDARD 11)

# Find sources and define an executable
file(GLOB SOURCES src/*.cpp)
add_executable(RainFall ${SOURCES})

# Enable CPack, to create nice distributables
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
