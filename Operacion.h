//Ejercicio 4

#ifndef EJERCICIOSUML_OPERACION_H
#define EJERCICIOSUML_OPERACION_H

class Operacion {
private:
    double x, y;

public:
    Operacion(double x, double y);
    double suma();
    double resta();
    double division();

};

#endif //EJERCICIOSUML_OPERACION_H