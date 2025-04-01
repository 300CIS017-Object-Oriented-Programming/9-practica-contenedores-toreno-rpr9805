#ifndef TORNEO_H
#define TORNEO_H

#include "Jugador.h"
#include <map>


class Torneo {
    private:
        map<int, Videojuego *> videojuegosDisponibles;
        map<string, Jugador *> jugadoresRegistrados;
    public:
        Torneo();
        virtual ~Torneo();
        void registarVideojuego();
        void registarJugador();
        void inscribirJugadorEnVideojuego();
        void mostrarVidejuegosDeJugador();
        void promedioDificultadJugador();
        void inicializarVideojuego();
        void inicializarJugador();
};



#endif //TORNEO_H
