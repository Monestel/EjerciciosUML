#include <iostream>
#include "Estudiante.h"
#include "Profesor.h"
#include "Biblioteca.h"
#include "Libro.h"
#include "Casa.h"
#include "Calculadora.h"
#include "Operacion.h"
#include "Automovil.h"

using namespace std;

int main() {

    cout << "--- Ejercicio 1: ---" << endl;

    Profesor p1("Jonathan", 5);
    Estudiante e1("David");
    Estudiante e2("Keilor");

    p1.calificarEstudiante(&e1);
    p1.calificarEstudiante(&e2);
    p1.listarEstudiantes();
    cout << endl;



    cout << "--- Ejercicio 2: ---" << endl;

    Biblioteca b1("Joaquin Garcia Monge", 4);
    Libro L1("Darkly Dreaming Dexter", "Jeff Lindsay");
    Libro L2("Dexter is Dead", "Jeff Lindsay");

    b1.agregarLibro(&L1);
    b1.agregarLibro(&L2);
    b1.listarLibros();
    cout << endl;



    cout << "--- Ejercicio 3: ---" << endl;

    Casa casa("Tilaran Centro", 12);

    casa.agregarHabitacion("Cocina");
    casa.agregarHabitacion("Dormitorio principal");
    casa.agregarHabitacion("Sala");
    casa.agregarHabitacion("Banio");
    casa.listarHabitaciones();
    cout << endl;



    cout << "--- Ejercicio 4: ---" << endl;

    Calculadora Casio;
    Operacion ope(18, 9);

    cout << "Resultado suma: " << Casio.calcularSuma(&ope) << endl;
    cout << "Resultado resta: " << Casio.calcularResta(&ope) << endl;
    cout << "Resultado division: " << Casio.calcularDivision(&ope) << endl;



    cout <<"--- Ejercicio 5: ---" << endl;

    Automovil Batimovil;
    Batimovil.mostrarRuedas();

    return 0;
}