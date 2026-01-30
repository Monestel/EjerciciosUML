//Ejercicio 27

#ifndef EJERCICIOSUML_OBRAARTE_H
#define EJERCICIOSUML_OBRAARTE_H
#include <string>
using namespace std;

class ObraArte {
private:
    string titulo, autor;
    int anio;

public:
    ObraArte(string titulo, string autor, int anio);
    string getTitulo();
    string getAutor();
    int getAnio();

};

#endif //EJERCICIOSUML_OBRAARTE_H