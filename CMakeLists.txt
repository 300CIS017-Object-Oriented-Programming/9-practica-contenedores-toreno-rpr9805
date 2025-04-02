cmake_minimum_required(VERSION 3.30)
project(9_practica_contenedores_toreno_rpr9805)

set(CMAKE_CXX_STANDARD 14)

include_directories(prc)

add_executable(9_practica_contenedores_toreno_rpr9805
    prc/Jugador.cpp
    prc/Jugador.h
        prc/main.cpp
    prc/Torneo.cpp
    prc/Torneo.h
    prc/Videojuego.cpp
    prc/Videojuego.h)
