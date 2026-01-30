//Ejercicio 4

#include "Operacion.h"

Operacion::Operacion(double x, double y) {
    this->x = x;
    this->y = y;
}

double Operacion::suma() {
    return x + y;
}

double Operacion::resta() {
    return x - y;
}

double Operacion::division() {
    if (y !=0) {
        return x / y;
    }
    return 0;
}
