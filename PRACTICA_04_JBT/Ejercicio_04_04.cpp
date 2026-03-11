// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

float cambioOficial(float montoBs);
float cambioParalelo(float montoBs);

int main()
{
    system("cls");
    float montoBs=0.0;

    cout<<"Se calculara el cambio de Bolivianos a Dolares"<<endl;
    cout<<"Ingrese el monto a cambiar: ";
    cin>>montoBs;

    while (montoBs<=0)
    {
        if (montoBs<=0)
        {
        cout<<"El monto no puede ser menor o igual a 0"<<endl;
        cout<<"Ingrese el monto nuevamente: ";
        cin>>montoBs;
        }
    }
    cout<<"\nEl monto de dolares en cambio oficial es: "<<cambioOficial(montoBs)<<endl;
    cout<<"El monto de dolares en cambio paralelo es: "<<cambioParalelo(montoBs);
    return 0;
}

float cambioOficial(float montoBs)
{
    float dolarOficial=0.0;
    dolarOficial=montoBs/6.96;
    return dolarOficial;
}
float cambioParalelo(float montoBs)
{
    float dolarParalelo=0.0;
    dolarParalelo=montoBs/9.08;
    return dolarParalelo;
}