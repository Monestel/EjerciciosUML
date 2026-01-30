//Ejercicio 1

#ifndef EJERCICIOSUML_ESTUDIANTE_H
#define EJERCICIOSUML_ESTUDIANTE_H
#include <string>
using namespace std;

class Profesor;

class Estudiante {
private:
    string nombre;
    Profesor *profesor;
public:
    Estudiante(string nombre);
    void asignarProfesor(Profesor* profesor);
    string getNombre();

};

#endif //EJERCICIOSUML_ESTUDIANTE_H