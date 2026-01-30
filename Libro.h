//Ejercicio 2

#ifndef EJERCICIOSUML_LIBRO_H
#define EJERCICIOSUML_LIBRO_H
#include <string>
using namespace std;

class Biblioteca;

class Libro {
private:
    string titulo, autor;
    Biblioteca* biblioteca;
public:
    Libro(string titulo, string autor);
    ~Libro();
    void asignarBiblioteca(Biblioteca* biblioteca);
    string getTitulo();
    string getAutor();
};

#endif //EJERCICIOSUML_LIBRO_H