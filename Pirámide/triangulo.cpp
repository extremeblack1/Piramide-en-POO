//Determinar que triangulo es

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
    double A, B, C, area, S;
    cout<<"-------------------------"<<endl;
    cout<<"Ingrese el primer lado del triangulo: "<<endl; cin>>A;
    system("clear");

    cout<<"--------------------------"<<endl;
    cout<<"Ingrese el segundo lado del triangulo: "<<endl; cin>>B;
    system("clear");

    cout<<"--------------------------"<<endl;
    cout<<"Ingrese el tercer lado del triangulo: "<<endl; cin>>C;
    system("clear");
    
    if(((A + B) > C) && ((A + C) > B) && ((B + C ) > A))
    {
        //Equilatero = A = B = C
        //Isósceles = A = B, B = C, A = C
        //Escaleno = Todos son diferentes

        if(A == B && A == C)
        {
            cout<<"Es un triángulo equilatero"<<endl;

        }
        else if( A == B || B == C || A == C)
        {
            cout<<"Es un triángulo isósceles"<<endl;
        }
        else
        {
            cout<<"Es un triángulo escaleno"<<endl;
        }
        S = (A + B + C) /2;
        area = sqrt(S * (S-A) * (S-B) * (S-C));
        cout<<"El area del triangulo es de: "<<area<<endl;
    }
    else
    {
        cout<<"Este4 no corresponde a un triangulo: "<<endl;
    }
}