#include <iostream>
#include "Estudiante.h"
#include "Profesor.h"
#include "Biblioteca.h"
#include "Libro.h"
#include "Casa.h"
#include "Calculadora.h"
#include "Operacion.h"
#include "Automovil.h"
#include "Cocinero.h"
#include "Receta.h"
#include "Museo.h"
#include "ObraArte.h"
#include "IDE.h"
#include "Programador.h"

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
    cout << endl;



    cout <<"--- Ejercicio 6: ---" << endl;

    Automovil Batimovil;
    Batimovil.mostrarRuedas();
    cout << endl;



    cout << "--- Ejercicio 20: ---" << endl;

    Receta platillo1("Beef Wellington");
    Cocinero cocinero1("Gordon Ramsay");

    Receta platillo2("Ratatouille");
    Cocinero cocinero2("Remy");

    cocinero1.cocinar(platillo1);
    cocinero2.cocinar(platillo2);
    cout << endl;



    cout << "--- Ejercicio 27: ---" << endl;

    Museo mus("Museo del Jade", 6);
    ObraArte obra1("Apolo de Belvedere", "Leocares", 120);
    ObraArte obra2("Saturno devorando a su hijo", "Francisco de Goya", 1823);
    ObraArte obra3("Meidias Hydria", "Meidias",-420);

    mus.agregarObra(&obra1);
    mus.agregarObra(&obra2);
    mus.agregarObra(&obra3);

    mus.listarObras();
    cout << endl;



    cout << "--- Ejercicio 28: ---" << endl;

    IDE ide1("Clion", "c++");
    Programador prog1("David", 18, "Riot Games");

    IDE ide2("Clion", "c++");
    Programador prog2("Keilor", 23, "Microsoft");

    IDE ide3("Zinjal", "c++");
    Programador prog3("Luis Diego", 19, "Amazon");

    cout << "Programador 1: \n";
    prog1.escribirCodigo(ide1);

    cout << "\nProgramador 2:\n";
    prog2.escribirCodigo(ide2);

    cout << "\nProgramador 3:\n";
    prog3.escribirCodigo(ide3);
    cout << endl;

    cout << "--- Final de los ejercicios ---" << endl;
    cout << "--- Total de 8 ejercicios ---" << endl;

    return 0;
}