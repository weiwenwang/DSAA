cmake_minimum_required(VERSION 2.8)
project(cmake)

set(CMAKE_C_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(SOURCE_FILES main.cpp intSLLNode.cpp intSLList.cpp)
add_executable(main ${SOURCE_FILES})