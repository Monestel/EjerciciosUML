//Ejercicio 27

#include "Museo.h"
#include <iostream>

Museo::Museo(string nombre, int capacidad) {
    this->nombre = nombre;
    this->capacidad = capacidad;
    this->cantidad = 0;
    obras = new ObraArte*[capacidad];
}

Museo::~Museo() {
    delete [] obras;
}

void Museo::agregarObra(ObraArte *obra) {
    if (cantidad < capacidad) {
        obras[cantidad] = obra;
        cantidad++;
    }
}

void Museo::listarObras() {
    cout << "Obras en el " << nombre << ":" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << i + 1 << ") "
             << obras[i]->getTitulo()
             << ". Autor: " << obras[i]->getAutor()
             << ", anio ";

        int anio = obras[i]->getAnio();
        if (anio < 0)
            cout << -anio << " a.C.";
        else
            cout << anio << " d.C.";

        cout << endl;
    }
}

