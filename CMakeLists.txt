cmake_minimum_required(VERSION 3.4)
project(RPGProject)
set(CMAKE_CXX_STANDARD 17)
add_executable(RPGProject priest.h mage.h warrior.h player.h player.cpp warrior.cpp mage.cpp priest.cpp main.cpp)
