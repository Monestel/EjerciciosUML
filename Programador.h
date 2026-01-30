//Ejercicio 28

#ifndef EJERCICIOSUML_PROGRAMADOR_H
#define EJERCICIOSUML_PROGRAMADOR_H

#include "IDE.h"

class Programador {
private:
    string nombre, empresa;
    int edad;
public:
    Programador(string nombre, int edad, string empresa);
    void escribirCodigo(IDE ide);

};

#endif //EJERCICIOSUML_PROGRAMADOR_H