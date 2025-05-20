cmake_minimum_required(VERSION 3.30)
project(CampoMinato)

set(CMAKE_CXX_STANDARD 26)

add_executable(CampoMinato ./src/main.cpp
        src/engine/terminal-utils.cpp
        src/engine/terminal-utils.h)
