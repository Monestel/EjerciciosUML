//Ejercicio 27

#ifndef EJERCICIOSUML_MUSEO_H
#define EJERCICIOSUML_MUSEO_H
#include <string>
using namespace std;

#include "ObraArte.h"

class Museo {
private:
    string nombre;
    ObraArte** obras;
    int cantidad, capacidad;

public:
    Museo(string nombre, int capacidad);
    ~Museo();
    void agregarObra(ObraArte* obra);
    void listarObras();
};

#endif //EJERCICIOSUML_MUSEO_H