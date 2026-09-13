cmake_minimum_required(VERSION 3.20)

project(Taller1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Taller1
        src/objetos/Pacientes.cpp
        src/logic/FileReading.cpp
        src/logic/Main.cpp
        src/logic/Menu.cpp
)
