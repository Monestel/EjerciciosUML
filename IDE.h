//Ejercicio 28

#ifndef EJERCICIOSUML_IDE_H
#define EJERCICIOSUML_IDE_H
#include <string>
using namespace std;

class IDE {
private:
    string nombre, lenguaje;

public:
    IDE(string nombre, string lenguaje);
    string getNombre();
    string getLenguaje();

};

#endif //EJERCICIOSUML_IDE_H