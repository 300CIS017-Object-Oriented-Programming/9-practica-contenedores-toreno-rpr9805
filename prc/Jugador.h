#ifndef JUGADOR_H
#define JUGADOR_H


#include "Videojuego.h"
#include <vector>

using namespace std;

class Jugador {
    private:
        string nickname;
        int ranking;
        vector<Videojuego *> videoJuegosInscritos;
    public:
        Jugador();
        Jugador(string nickname, int ranking);
        string getNickname();
        int getRanking();
        void mostrarJuegosInscritos();
        void inscribirseAJuego(Videojuego *juego);
        double calcularPromedio();
};



#endif //JUGADOR_H
