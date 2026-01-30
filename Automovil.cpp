//Ejercicio 6

#include "Automovil.h"
#include <iostream>

Automovil::Automovil() {
    ruedas[0] = new Rueda("Delantera izquiera");
    ruedas[1] = new Rueda("Delantera derecha");
    ruedas[2] = new Rueda("Trasera izquierda");
    ruedas[3] = new Rueda("Trasera derecha");
}

Automovil::~Automovil() {
    for (int i = 0; i < 4; i++) {
        delete ruedas[i];
    }
}

void Automovil::mostrarRuedas() {
    for (int i = 0; i < 4; i++) {
        cout << "Rueda: " << ruedas[i]->getPosicion() << endl;
    }
}
