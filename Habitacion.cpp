//Ejercicio 3

#include "Habitacion.h"
#include <string>

Habitacion::Habitacion(string nombre, Casa* casa) {
    this->nombre = nombre;
    this->casa = casa;
}

Habitacion::~Habitacion() {

}

string Habitacion::getNombre() {
    return nombre;
}