cmake_minimum_required(VERSION 3.0.0)
project(HelloWorld VERSION 0.1.0 LANGUAGES C CXX)
include_directories(SYSTEM ${CMAKE_SOURCE_DIR})
#include_directories(${CMAKE_SOURCE_DIR}/nlohmann)
include(CTest)
enable_testing()

add_executable(HelloWorld main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
