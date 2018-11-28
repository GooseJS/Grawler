cmake_minimum_required(VERSION 3.12)
project(Grawler)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(../GSTL/src ${CMAKE_CURRENT_BINARY_DIR}/gstl)

set(GSTL_NO_BUILD_TESTS 1)
include_directories(../GSTL/src)

add_executable(Grawler src/main.cpp src/Player.cpp src/Player.h)
target_link_libraries(Grawler GSTL sfml-system sfml-window sfml-graphics sfml-audio)