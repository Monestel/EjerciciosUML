//Ejercicio 6

#ifndef EJERCICIOSUML_AUTOMOVIL_H
#define EJERCICIOSUML_AUTOMOVIL_H

#include "Rueda.h"

class Automovil {
private:
    Rueda* ruedas[4];

public:
    Automovil();
    ~Automovil();
    void mostrarRuedas();
};

#endif //EJERCICIOSUML_AUTOMOVIL_H