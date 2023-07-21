cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Model/Contact/contact.h Model/Contact/contact.cpp singleton.h singleton.cpp Model/FactoryPattern/FactoryPattern.cpp Model/FactoryPattern/FactoryPattern.h Model/FactoryPattern/AbstractProductA/AbstractProductA.cpp Model/FactoryPattern/AbstractProductA/AbstractProductA.h)
