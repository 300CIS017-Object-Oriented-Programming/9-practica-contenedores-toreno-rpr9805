#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <string>
using namespace std;

class Videojuego {
  private:
    int codigo;
    string nombre;
    string genero;
    int dificultad;
  public:
    Videojuego();
    Videojuego(int codigo, string nombre, string genero, int dificultad);
    int getCodigo();
    string getNombre();
    string getGenero();
    int getDificultad();
    void mostrar();
};



#endif //VIDEOJUEGO_H
