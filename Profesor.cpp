//Ejercicio 1
#include <iostream>
#include "Profesor.h"
#include "Estudiante.h"

Profesor::Profesor(string nombre, int capacidad) {
    this->nombre = nombre;
    this->capacidad = capacidad;
    this->cantidad = 0;
    estudiantes = new Estudiante*[capacidad];
}

Profesor::~Profesor() {
    delete[] estudiantes;
}

void Profesor::calificarEstudiante(Estudiante *estudiante) {
    if (cantidad < capacidad) {
        estudiantes[cantidad] = estudiante;
        cantidad++;
        estudiante->asignarProfesor(this);
    }
}

void Profesor::listarEstudiantes() {
    cout << "Estudiantes calificados por " << nombre << ":\n";
    for (int i = 0; i < cantidad; i++) {
        cout << "- " << estudiantes[i]->getNombre() << endl;
    }
}
