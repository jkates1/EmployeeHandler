cmake_minimum_required(VERSION 3.5)
project(EmployeeHandler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Employee.h Employee.cpp Database.cpp Database.h UserInterface.cpp)
add_executable(EmployeeHandler ${SOURCE_FILES})