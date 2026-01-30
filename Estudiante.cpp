//Ejercicio 1

#include "Estudiante.h"

Estudiante::Estudiante(string nombre) {
    this->nombre = nombre;
    this->profesor = nullptr;
}

void Estudiante::asignarProfesor(Profesor* profesor) {
    this->profesor = profesor;
}

string Estudiante::getNombre() {
    return nombre;
}
