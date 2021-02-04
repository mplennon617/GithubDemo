cmake_minimum_required(VERSION 3.15)
project(templatedClassDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(templatedClassDemo main.cpp TemplatePrinter.h Printer.cpp Printer.h Catch.h test.cpp)