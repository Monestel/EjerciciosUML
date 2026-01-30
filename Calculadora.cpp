//Ejercicio 4

#include "Calculadora.h"
#include "Operacion.h"

double Calculadora::calcularSuma(Operacion* operacion) {
    return operacion->suma();
}

double Calculadora::calcularResta(Operacion* operacion) {
    return operacion->resta();
}

double Calculadora::calcularDivision(Operacion* operacion) {
    return operacion->division();
}