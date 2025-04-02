#include "Torneo.h"

void menu(Torneo& torneo) {
    int opc, ranking;
    string nickname, codigo;
    do {
        cout<<"==========Battle Arena=========="<<endl;
        cout<<"1. Registar Videojuego"<<endl;
        cout<<"2. Registar Jugador"<<endl;
        cout<<"3. Inscribir Jugador"<<endl;
        cout<<"4. Monstar juegos inscritos de un jugador"<<endl;
        cout<<"5. Promedio de dificultad de jugador"<<endl;
        cout<<"6. Ranking"<<endl;
        cout<<"7. Editar ranking"<<endl;
        cout<<"0. Sair"<<endl;
        cout<<"=================================="<<endl<<"Selecciona opcion:"<<endl;
        cin>>opc;
        cin.ignore();

        switch(opc) {
            case 0:
                cout<<"Saliendo..."<<endl;
                break;
            case 1:
                torneo.registarVideojuego();
                break;
            case 2:
                torneo.registarJugador();
                break;
            case 3:
                torneo.inscribirJugadorEnVideojuego();
                break;
            case 4:
                torneo.mostrarVidejuegosDeJugador();
                break;
            case 5:
                torneo.promedioDificultadJugador();
                break;
            case 6:
                cout<<"No valido en el momento"<<endl;
                //torneo.mostrarRanking();
                break;
            case 7:
                cout<<"Que Jugador desea modificar: ";
                getline(cin,nickname);
                cout<<"Cual es el nuevo ranking: ";
                cin>>ranking;
                torneo.editarRankingJugador(nickname, ranking);
                break;
            default:
                cout<<"No valido"<<endl;
                break;
        }

    }while (opc !=0);
}

int main() {
    Torneo torneo;
    torneo.inicializarJugador();
    torneo.inicializarJugador();
    menu(torneo);
    return 0;
}
