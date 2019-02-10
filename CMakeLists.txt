cmake_minimum_required(VERSION 3.13)
project(boostThreads)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED COMPONENTS system thread)
include_directories(include ${Boost_INCLUDE_DIR})

# case 1: function
#add_executable(boostThreads main.cpp)
#target_link_libraries(boostThreads ${Boost_INCLUDE_DIR})

# case 2: functor
#add_executable(boostThreads main.cpp functorWorker.cpp)
#target_link_libraries(boostThreads ${Boost_INCLUDE_DIR})

# case 3: class
#[[
add_library(classWorker src/classWorker.cpp)
add_executable(boostThreads main.cpp)
target_link_libraries(boostThreads ${Boost_LIBRARIES} classWorker)
]]

# case 4: advanced class
add_library(classWorkerAdvanced src/classWorkerAdvanced.cpp)
add_executable(boostThreads main.cpp)
target_link_libraries(boostThreads ${Boost_LIBRARIES} classWorkerAdvanced)
