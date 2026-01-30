//Ejercicio 20
#ifndef EJERCICIOSUML_COCINERO_H
#define EJERCICIOSUML_COCINERO_H

#include "Receta.h"

class Cocinero {
private:
    string nombre;

public:
    Cocinero(string nombre);
    void cocinar(Receta receta);

};

#endif //EJERCICIOSUML_COCINERO_H