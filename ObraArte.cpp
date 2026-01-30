//Ejercicio 27

#include "ObraArte.h"

ObraArte::ObraArte(string titulo, string autor, int anio) {
    this->titulo = titulo;
    this->autor = autor;
    this->anio = anio;
}

string ObraArte::getTitulo() {
    return titulo;
}

string ObraArte::getAutor() {
    return autor;
}

int ObraArte::getAnio() {
    return anio;
}
