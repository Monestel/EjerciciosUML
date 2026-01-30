//Ejercicio 3

#ifndef EJERCICIOSUML_CASA_H
#define EJERCICIOSUML_CASA_H
#include <string>
using namespace std;

class Habitacion;

class Casa {
private:
    string direccion;
    Habitacion** habitaciones;
    int cantidad, capacidad;

public:
    Casa(string direccion, int capacidad);
    ~Casa();
    void agregarHabitacion(string nombre);
    void listarHabitaciones();

};

#endif //EJERCICIOSUML_CASA_H