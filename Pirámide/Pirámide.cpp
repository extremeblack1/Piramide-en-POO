#include "Piramide.h"
#include <math.h>
#include <iostream>

//Crear constructor

Pirámide::Pirámide(double base, double altura, double apotema) //Constructor
{
    this->base = base;
    this->altura = altura;
    this->apotema = apotema;
}

//Crear un destructor

Pirámide::~Pirámide() //Destructor
{
    cout<<"---------------------------------"<<endl
        <<"/// Obejto destruido ///"<<endl
        <<"---------------------------------"<<endl;
}

//Crear un copia

Pirámide::Pirámide(const Pirámide & orig) //Copia
{
    base = orig. base;
    altura = orig.altura;
    apotema = orig.apotema;
}

//Meótods para la pirámide (set)

void Pirámide::setBase(double base)
{
    this->base = base;
}

void Pirámide::setAltura(double altura)
{
    this->altura = altura;
}

void Pirámide::setApotema(double apotema)
{
    this->apotema = apotema;
}

//Método para la pirámide (get)
double Pirámide::getBase() const
{
    return base;
}

double Pirámide::getAltura() const
{
    return altura;
}

double Pirámide::getApotema() const
{
    return apotema;
}

//Procedimiento

double Pirámide::calcularVolumen() const
{
    return (1.0/3.0) * base * altura;
}

double Pirámide::calcularAreaSuperficie() const
{
    return calcularAreaBase() + calcularAreaLateral();
}

double Pirámide::calcularAreaLateral() const 
{
    return (base * calcularApotemaTriangulo()) * 3;
}

double Pirámide::calcularAreaBase() const
{
    return base * base;
}

double Pirámide::calcularApotemaTriangulo() const
{
    return sqrt((apotema * apotema) - ((base * base) /4));
}

double Pirámide::calcularPerimetroBase() const
{
    return base * 4;
}

string Pirámide::determinarTipo() const
{
    if(base == altura && base == apotema)
    {
        return "Pirámide Regular";
    }
    else if(base != altura && base != apotema && altura != apotema)
    {
        return "Pirámide Irregular";
    }
    else
    {
        return "Pirámide Semi-Regular";
    }
}

//Método para imprimir

void Pirámide::imprimirDatos() const
{
    cout<<"Base: "<< base <<endl
        <<"Altura: "<< altura<<endl
        <<"Apotema: "<< apotema<<endl
        <<"Volumen: "<<calcularVolumen()<<endl
        <<"Área Superficie: "<< calcularAreaSuperficie()<<endl
        <<"Ágea Lateral: "<< calcularAreaLateral()<<endl
        <<"Área Base: "<<calcularAreaBase()<<endl
        <<"Perímetro Base: "<<calcularPerimetroBase()<<endl;
}