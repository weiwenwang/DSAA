cmake_minimum_required(VERSION 2.8)
project(bench)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(SOURCE_FILES
        main.c
        singlyList.c
      )

add_executable(bench ${SOURCE_FILES})
