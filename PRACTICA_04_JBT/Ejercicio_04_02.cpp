// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

int numeroMayor(int num1, int num2, int num3, int mayor);

int main()
{
    system("cls");
    int num1=0;
    int num2=0;
    int num3=0;
    int mayor=0;
    cout<<"Se determinara el mayor entre tres numeros"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el tercer numero: ";
    cin>>num3;

    cout<<"El numero mayor es: "<<numeroMayor(num1,num2,num3,mayor);
    return 0;
}
int numeroMayor(int num1, int num2, int num3, int mayor)
{
    if ((num1>num2)&&(num1>num3))//
    {
    mayor=num1;
    }
    if ((num2>num1)&&(num2>num3))//
    {
    mayor=num2;
    }
    if ((num3>num2)&&(num3>num1))//
    {
    mayor=num3;
    }
    if ((num1==num2)&&(num1==num3))//
    {
    mayor=num1;
    }
    if ((num2==num1)&&(num2==num3))
    {
    mayor=num2;
    }
    if ((num3==num2)&&(num3==num1))
    {
    mayor=num3;
    }
    if ((num1==num2)&&(num1>num3))//
    {
    mayor=num1;
    }
    if ((num1>num2)&&(num1==num3))//
    {
    mayor=num1;
    }
    if ((num2==num1)&&(num2>num3))
    {
    mayor=num2;
    }
    if ((num2>num1)&&(num2==num3))
    {
    mayor=num2;
    }
    if ((num3==num1)&&(num3>num2))
    {
    mayor=num3;
    }
    if ((num3>num1)&&(num3==num2))
    {
    mayor=num3;
    }
    return mayor;
}