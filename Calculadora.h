//Ejercicio 4

#ifndef EJERCICIOSUML_CALCULADORA_H
#define EJERCICIOSUML_CALCULADORA_H

class Operacion;

class Calculadora {
public:
    double calcularSuma(Operacion* operacion);
    double calcularResta(Operacion* operacion);
    double calcularDivision(Operacion* operacion);

};

#endif //EJERCICIOSUML_CALCULADORA_H