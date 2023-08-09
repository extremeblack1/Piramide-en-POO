#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include <iostream>

using namespace std;

class Pirámide
{
    public:
    Pirámide(double base = 0, double altura= 0, double apotema = 0);
    ~Pirámide();

    //Metodos get y set
    void setBase(double base);
    double getBase() const;

    void setAltura(double altura);
    double getAltura() const;

    void setApotema(double apotema);
    double getApotema() const;

    //Métodos para calcular datos relacionados con la pirámide
    string determinarTipo() const;
    double calcularVolumen() const;
    double calcularAreaSuperficie() const;
    double calcularAreaLateral() const;
    double calcularAreaBase() const;
    double calcularApotemaTriangulo() const;
    double calcularPerimetroBase() const;

    //Método para imprimir los datos de la pirámide
    void imprimirDatos() const;
    Pirámide(const Pirámide & orig);

    private:
    double base;
    double altura;
    double apotema;


};
#endif

