#ifndef TORNEO_H
#define TORNEO_H

#include "Jugador.h"
#include <map>
#include <set>


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
        //void mostrarRanking();
        //bool compararRanking(Jugador* a, Jugador* b);
        void editarRankingJugador(string nickname, int newRanking);
};



#endif //TORNEO_H
