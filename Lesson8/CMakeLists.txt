cmake_minimum_required(VERSION 3.16)
project(Lesson8)

set(CMAKE_CXX_STANDARD 17)
add_executable(Lesson8 main.cpp err/Ex.cpp err/Ex.h Bar.cpp Bar.h Robot.cpp Robot.h err/DivisionByZero.cpp err/DivisionByZero.h err/OffTheField.cpp err/OffTheField.h err/IllegalCommand.cpp err/IllegalCommand.h)