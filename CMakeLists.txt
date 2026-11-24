cmake_minimum_required(VERSION 3.16)
project(roblox-optimizer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robloxoptimizer
    src/main.cpp
    src/tweaks.cpp
    src/profiles.cpp
    src/monitor.cpp
)

target_include_directories(robloxoptimizer PRIVATE include)

if(WIN32)
    target_link_libraries(robloxoptimizer PRIVATE userenv)
endif()
