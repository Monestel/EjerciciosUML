//Ejercicio 28

#include "IDE.h"

IDE::IDE(string nombre, string lenguaje) {
    this->nombre = nombre;
    this->lenguaje = lenguaje;
}

string IDE::getNombre() {
    return nombre;
}

string IDE::getLenguaje() {
    return lenguaje;
}