// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

bool esPar(int num);
int main()
{
    system("cls");

    bool espar;
    int num=0;

    cout<<"Se determinara si el numero es par o no"<<endl;
    cout<<"Si es par saldra (1), si es impar saldra (0)"<<endl;
    cout<<"Ingrese un numero distinto de 0: ";
    cin>>num;

    while (num==0)
    {
        if (num==0)
        {
        cout<<"El numero debe ser distinto de 0"<<endl;
        cout<<"Ingreselo nuevamente: ";
        cin>>num;
        }
    }
    espar=esPar(num);
    cout<<"El numero ingresado es: "<<espar;
    return 0;
}
bool esPar (int num)
{
    if (num%2==0)
    {
    return true;
    }
    else
    {
    return false;
    }
}