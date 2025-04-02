#include "Jugador.h"

Jugador::Jugador() {
    nickname = " ";
    ranking = 0;
}

Jugador::Jugador(string nickname, int ranking): nickname(nickname), ranking(ranking) {}

string Jugador::getNickname() {
    return nickname;
}

int Jugador::getRanking() {
    return ranking;
}

void Jugador::setRanking(int ranking) {
    Jugador::ranking = ranking;
}

void Jugador::mostrarJuegosInscritos() {
    if (videoJuegosInscritos.empty()) {
        cout<<"Aun no se ha inscrito a ningun juego"<<endl;
    } else {
        cout<<"Videojuegos inscritos: "<<endl;
        for (auto videojuego : videoJuegosInscritos) {
            cout <<"- "<<videojuego->getNombre()<<endl<<"- "<<videojuego->getGenero()<<endl<<"- "<<videojuego->getDificultad()<<endl;
        }
    }
}

void Jugador::inscribirseAJuego(Videojuego *juego) {
    for (auto videojuego : videoJuegosInscritos) {
        if (videojuego->getCodigo() ==  juego->getCodigo()) {
            cout<<"Ya se esta inscrito en este juego"<<endl;
        }
        else {
            videoJuegosInscritos.push_back(videojuego);
            cout<<"Inscripcion existosa"<<endl;
        }
    }
}

double Jugador::calcularPromedio() {
    double valor;
    if (videoJuegosInscritos.empty()) {
        valor = 0;
    }else {
        for (auto videojuego : videoJuegosInscritos) {
            valor+= videojuego->getDificultad();
        }
        valor= valor/videoJuegosInscritos.size();
    }
    return valor;
}

