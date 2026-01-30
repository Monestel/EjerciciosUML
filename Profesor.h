//Ejercicio 1

#ifndef EJERCICIOSUML_PROFESOR_H
#define EJERCICIOSUML_PROFESOR_H
#include <string>
using namespace std;

class Estudiante;

class Profesor {
private:
    string nombre;
    Estudiante** estudiantes;
    int cantidad, capacidad;
public:
    Profesor(string nombre, int cantidad);
    ~Profesor();
    void calificarEstudiante(Estudiante* estudiante);
    void listarEstudiantes();

};

#endif //EJERCICIOSUML_PROFESOR_H