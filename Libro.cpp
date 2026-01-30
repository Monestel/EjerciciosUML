//Ejercicio 2

#include "Libro.h"

Libro::Libro(string titulo, string autor) {
    this->titulo = titulo;
    this->autor = autor;
    this->biblioteca = nullptr;
}

Libro::~Libro() {

}

void Libro::asignarBiblioteca(Biblioteca *biblioteca) {
    this->biblioteca = biblioteca;
}

string Libro::getTitulo() {
    return titulo;
}

string Libro::getAutor() {
    return autor;
}
