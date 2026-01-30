//Ejercicio 6

#include "Rueda.h"

Rueda::Rueda(string posicion) {
    this->posicion = posicion;
}

Rueda::~Rueda() {

}

string Rueda::getPosicion() {
    return posicion;
}