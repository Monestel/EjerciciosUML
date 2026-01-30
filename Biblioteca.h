//Ejercicio 2

#ifndef EJERCICIOSUML_BIBLIOTECA_H
#define EJERCICIOSUML_BIBLIOTECA_H
#include <string>
using namespace std;

class Libro;

class Biblioteca {
private:
    string nombre;
    Libro** libros;
    int cantidad, capacidad;
public:
    Biblioteca(string nombre, int capacidad);
    ~Biblioteca();
    void agregarLibro(Libro* libro);
    void listarLibros();

};


#endif //EJERCICIOSUML_BIBLIOTECA_H