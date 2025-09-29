cmake_minimum_required(VERSION 4.0)
project(zmq_binary_star_pattern)

set(CMAKE_CXX_STANDARD 17)
add_executable(bstarsrv2
        bstarsrv2.cpp
        bstarsrv2.h
        bstar.hpp
        bstar.cpp)
target_link_libraries(bstarsrv2 zmq zmqpp)

add_executable(bstarcli zhelpers.hpp
        zmsg.hpp
        bstarcli.cpp
        bstarcli.h)
target_link_libraries(bstarcli zmq)