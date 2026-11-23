cmake_minimum_required(VERSION 3.10)
project(demo LANGUAGES CXX)

find_package(indicators 2.3 CONFIG REQUIRED)

add_executable(demo demo.cpp)
target_link_libraries(demo PRIVATE indicators::indicators)
