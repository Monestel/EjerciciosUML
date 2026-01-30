//Ejercicio 6

#ifndef EJERCICIOSUML_RUEDA_H
#define EJERCICIOSUML_RUEDA_H
#include <string>
using namespace std;

class Rueda {
private:
    string posicion;

public:
    Rueda(string posicion);
    ~Rueda();
    string getPosicion();
};

#endif //EJERCICIOSUML_RUEDA_H