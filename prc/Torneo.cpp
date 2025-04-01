#include "Torneo.h"

Torneo::Torneo() {}

void Torneo::inicializarJugador() {
    jugadoresRegistrados["Keria"] = new Jugador("Keria", 10);
    jugadoresRegistrados["BauBauGaming"] = new Jugador("BauBauGaming", 5);
    jugadoresRegistrados["GGMurin"] = new Jugador("GGMurin", 1);
}

void Torneo::inicializarVideojuego() {
    videojuegosDisponibles[32456] = new Videojuego(32456, "CSGO", "FPS", 4);
    videojuegosDisponibles[78531] = new Videojuego(78531, "Pokemon", "JRPG", 2);
    videojuegosDisponibles[67515] = new Videojuego(67515, "Hollow Knight", "Metroidvania", 3);
}



void Torneo::registarJugador() {
    string nom;
    int rank, flag = 1;
    while (flag == 1) {
        cout << "Ingrese el nickname del jugador: ";
        cin.ignore();
        getline(cin, nom);
        if (jugadoresRegistrados.count(nom)) {
            cout << "jugador ya registrado, intente de nuevo"<<endl;
        }
        else {
            flag = 0;
        }
    }
    flag = 1;
    while (flag == 1) {
        cout << "Ingrese el numero de ranking: ";
        cin>>rank;
        if (rank > 1 || rank < 100) {
            cout << "Rango de ranking invalido, intentelo de nuevo"<<endl;
        }
        else {
            flag = 0;
        }
    }
    jugadoresRegistrados[nom] = new Jugador(nom, rank);
    cout << "Jugador registrado"<<endl;
}

void Torneo::registarVideojuego() {
    string nom, genero;
    int cod, dif, flag = 1;
    while (flag == 1) {
        cout << "Ingrese el codigo del videojuego"<<endl;
        cin>>cod;
        if (videojuegosDisponibles.count(cod)) {
            cout<<"Codigo no valido, intente de nuevo"<<endl;
        }else {
            flag = 0;
        }
    }
    flag = 1;
    cout<<"Ingrese el nombre: ";
    cin.ignore();
    getline(cin, nom);
    cout << "Ingrese el genero: ";
    cin.ignore();
    getline(cin, genero);
    while (flag == 1) {
        cout << "Ingrese la dificultad: ";
        cin>>dif;
        if (dif < 1 || dif > 5) {
            cout<<"Rango de dificultad no valido, intentelo de nuevo"<<endl;
        }else {
            flag = 0;
        }
    }
    videojuegosDisponibles[cod] = new Videojuego(cod, nom, genero, dif);
    cout << "Videojuego registrado"<<endl;
}

void Torneo::inscribirJugadorEnVideojuego() {
    string nom;
    int cod;

    cout<<"Nickname: ";
    cin.ignore();
    getline(cin, nom);
    if (!jugadoresRegistrados.count(nom)) {
        cout<<"Nickname no valido"<<endl;
    }else {
        cout<<"Codigo del videojuego: ";
        cin>>cod;
        if (!videojuegosDisponibles.count(cod)) {
            cout<<"Codigo no valido"<<endl;
        }else {
            jugadoresRegistrados[nom]->inscribirseAJuego(videojuegosDisponibles[cod]);
            cout<<"Inscripcion registrada"<<endl;
        }
    }
}

void Torneo::mostrarVidejuegosDeJugador() {
    string nom;
    cout<<"Nickname a buscar: ";
    if (!jugadoresRegistrados.count(nom)) {
        cout<<"Nickname no valido"<<endl;
    }else {
        jugadoresRegistrados[nom]->mostrarJuegosInscritos();
    }
}

void Torneo::promedioDificultadJugador() {
    string nom;
    double promedio;
    cout<<"Nickname a buscar: ";
    if (!jugadoresRegistrados.count(nom)) {
        cout<<"Nickname no valido"<<endl;
    } else {
        promedio = jugadoresRegistrados[nom]->calcularPromedio();
        cout<<"Promedio de dificultad: "<<promedio<<endl;
    }
}

Torneo::~Torneo() {
    for (auto& juegos : videojuegosDisponibles) {
        delete juegos.second;
    }
    for (auto& jugadores : jugadoresRegistrados) {
        delete jugadores.second;
    }
}








