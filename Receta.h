//Ejercicio 20

#ifndef EJERCICIOSUML_RECETA_H
#define EJERCICIOSUML_RECETA_H
#include <string>
using namespace std;

class Receta {
    string platillo;

public:
    Receta(string platillo);
    string getPlatillo();
};

#endif //EJERCICIOSUML_RECETA_H