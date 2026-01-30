//Ejercicio 3

#include <iostream>
#include "Casa.h"
#include "Habitacion.h"
#include <string>

Casa::Casa(string direccion, int capacidad) {
    this->direccion = direccion;
    this->capacidad = capacidad;
    this->cantidad = 0;
    habitaciones = new Habitacion*[capacidad];
}

Casa::~Casa() {
    for (int i = 0; i < capacidad; i++) {
        delete habitaciones[i];
    }
    delete[] habitaciones;
}

void Casa::agregarHabitacion(string nombre) {
    if (cantidad < capacidad) {
        habitaciones[cantidad] = new Habitacion(nombre, this);
        cantidad++;
    }
}

void Casa::listarHabitaciones() {
    cout << "Habitaciones en la casa en " << direccion << ":\n";
    for (int i = 0; i < cantidad; i++) {
        cout << "- " << habitaciones[i]->getNombre() << endl;
    }
}