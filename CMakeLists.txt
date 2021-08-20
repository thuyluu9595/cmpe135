cmake_minimum_required(VERSION 3.15)
project(cmpe_135)

set(CMAKE_CXX_STANDARD 14)

add_executable(cmpe_135 RicksGuitars/FindGuitarTester.cpp; RicksGuitars/Inventory.cpp; RicksGuitars/Inventory.h; RicksGuitars/Guitar.h)