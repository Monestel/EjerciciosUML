//Ejercicio 3

#ifndef EJERCICIOSUML_HABITACION_H
#define EJERCICIOSUML_HABITACION_H
#include <string>
using namespace std;

class Casa;

class Habitacion {
private:
    string nombre;
    Casa *casa;
public:
    Habitacion(string nombre, Casa* casa);
    ~Habitacion();
    string getNombre();

};


#endif //EJERCICIOSUML_HABITACION_H