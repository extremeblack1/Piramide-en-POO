#include "Piramide.h"
#include <iostream>
#include <cmath>
#include <thread> //Necesario para el retardo en pantalla
#include <chrono> //Necesario para el retardo en pantalla

using namespace std;

Pirámide piramide;

void Ingresar()
{
    system("clear");
    double base, altura, apotema;

    cout<<"-----------------------------"<<endl
        <<"Ingresa los datos de la pirámide"<<endl
        <<"--------------------------------"<<endl;
    
    //Validación para la base
    cout<<"Ingresa la base: "<<endl; 
    while(!(cin >> base))
    {
        cin.clear();  //Restaurar el estado de cin
        cin.ignore(1000, '\n'); //Descartar caracteres invalidos
        cout<<"Entrada inválida. Solo se acea números"<<endl;  //Mensaje previstos
    }

    //Validación para la altura
    cout<<"Ingresa la altura; "<<endl;
    while (!(cin >> altura))
    
    {
        cin.clear();
        cin.ignore(1000, '\n');/* code */
        cout<<"Entrada inválida. Solo se acepta números"<<endl;
    }
    
    //Validación para la apotema
    cout<<"Ingrese la apotema: "<<endl;
    while (!(cin >> apotema))
    {
        cin.clear();
        cin.ignore(1000, '\n');/* code */
        cout<<"Entrada inálida. Solo se acepta números"<<endl;
    }
    

    piramide.setBase(base);
    piramide.setAltura(altura);
    piramide.setApotema(apotema);

    return;
}
void consultar()
{
    system("clear");
    cout<<"/////////////////////"<<endl
        <<"Base: "<< piramide.getBase()<<endl
        <<"Altura: "<< piramide.getAltura()<<endl
        <<"Apotema: "<< piramide.getApotema()<<endl
        <<"/////////////////////"<<endl;
}
void Imprimir()
{
    system("clear");
    cout<<"----------------------------"<<endl
        <<"-> Datos de la pirámide <-"<<endl
        <<"----------------------------"<<endl;

        piramide.imprimirDatos();
        string tipo = piramide.determinarTipo();
        cout<<"\nTipo de pirámide es; " <<tipo<<endl;
}
void salir()
{
    cout<<"-- Saliendo del Programa --"<<endl;
    for(int i = 3; i >=0; i--)
    {
        cout << i <<endl;
        this_thread::sleep_for(chrono::seconds(3)); //Retardo en pantalla de 3 segundos
    }
    cout << "\n";
}
int main()
{
    int elección, sum = 0;
    char w[2], X='s';

    do
    {
        do
        {
            system("clear");

            cout<<"--------------------------------------"<<endl
                <<" *** Menú Principal ***"<<endl
                <<"INGRESE SOLO NÚMERO!!!!"<<endl
                <<"1. Ingresar datos de la pirámide."<<endl
                <<"2. Mostrar datos de ella."<<endl
                <<"3. Imprimir datos de la pirámide."<<endl
                <<"4. Salir del programa."<<endl

                <<"\nElegir una opción: "<<endl; cin>>w; elección=atoi(w);
            /* code */
        } while (elección < 1 || elección > 4);

            switch (elección)
            {
                case 1/* constant-expression */:
                {
                    Ingresar();
                    /* code */
                    break;
                }

                case 2: //consultar
                {
                    consultar();
                    break;
                }

                case 3: //Imprimir
                {
                    Imprimir();
                    break;
                }

                case 4 /*Salir*/:
                {
                    salir();
                    X = 'n';
                    break;
                }

                default:
                {
                    cout<<"Opción inválida. Por favor elige una"<<endl;
                    break;
                }
            }
            do
            {
                if(elección == 1 || elección == 2 || elección == 3)
                {
                    cout<<"\nContinuar s/n: "<<endl; cin>>X;
                    if(X != 's' && X != 'S' && X != 'n' && X != 'N')
                    {
                        cout<<"Opción inválida. Ingresa 's' o 'n'."<<endl;
                    }
                }/* code */
                else
                {
                    X = 'n'; //Si la elección no es 1, 2, 3. Asignar 'n' a X para salir
                }
            } while (X != 's' && X != 'S' && X != 'n' && X != 'N'); //Repetir hasta que se ingrese S o N
    } while (X == 's' || X =='S');
    
    return 0;
}