//Ejercicio 28

#include "Programador.h"
#include <iostream>

Programador::Programador(string nombre, int edad, string empresa) {
    this->nombre = nombre;
    this->edad = edad;
    this->empresa = empresa;
}

void Programador::escribirCodigo(IDE ide) {
    cout << nombre << " esta escribiendo codigo en "
         << ide.getLenguaje()
         << " usando " << ide.getNombre();
}
