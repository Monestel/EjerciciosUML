//Ejercicio 2
#include <iostream>
#include "Biblioteca.h"
#include <string>

#include "Libro.h"

Biblioteca::Biblioteca(string nombre, int capacidad) {
    this->nombre = nombre;
    this->capacidad = capacidad;
    this->cantidad = 0;
    libros = new Libro*[capacidad];
}

Biblioteca::~Biblioteca() {
    delete [] libros;
}

void Biblioteca::agregarLibro(Libro *libro) {
    if (cantidad < capacidad) {
        libros[cantidad] = libro;
        cantidad++;
        libro->asignarBiblioteca(this);
    }
}

void Biblioteca::listarLibros() {
   cout << "Libros en la biblioteca " << nombre << ":" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "- "
             << libros[i]->getTitulo()
             << ", autor "
             << libros[i]->getAutor()
             << endl;
    }
}
