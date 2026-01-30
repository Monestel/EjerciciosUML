//Ejercicio 20

#include "Receta.h"

Receta::Receta(string platillo) {
    this->platillo = platillo;
}

string Receta::getPlatillo() {
    return platillo;
}