cmake_minimum_required(VERSION 3.4.1)
project(Planarian)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

add_library(react-native-planarian            SHARED
            ../cpp/react-native-planarian.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
