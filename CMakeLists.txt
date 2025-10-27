cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the executable
add_executable(HelloWorld main.cpp)

# Force MSVC to report the correct C++ standard version
if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(HelloWorld PRIVATE /Zc:__cplusplus)
endif()
