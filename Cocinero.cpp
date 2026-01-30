//Ejercicio 20

#include "Cocinero.h"
#include <iostream>

Cocinero::Cocinero(string nombre) {
    this->nombre = nombre;
}

void Cocinero::cocinar(Receta receta) {
    cout << nombre << " cocinando la receta " << receta.getPlatillo() << endl;
}
