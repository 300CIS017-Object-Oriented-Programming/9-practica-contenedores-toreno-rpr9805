#include "Videojuego.h"

Videojuego::Videojuego(){
  codigo = 0;
  nombre = " ";
  genero = " ";
  dificultad = 0;
}

Videojuego::Videojuego(int codigo, string nombre, string genero, int dificultad): codigo(codigo), nombre(nombre), genero(genero), dificultad(dificultad){}

int Videojuego::getCodigo() {
  return codigo;
}

string Videojuego::getNombre() {
  return nombre;
}

string Videojuego::getGenero() {
  return genero;
}

int Videojuego::getDificultad() {
  return dificultad;
}

void Videojuego::mostrar() {
  cout<<"Codigo : "<< codigo;
  cout<<", Nombre :"<<nombre;
  cout<<", Genero : "<<genero;
  cout<<", Dificultad : "<<dificultad<<endl;
}
