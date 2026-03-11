// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

float calcularPromedio(float nota1, float nota2, float promedio);
int main()
{
    system("cls");
    float nota1=0;
    float nota2=0;
    float promedio=0;

    cout<<"Se calculara el promedio aritmetico."<<endl;
    cout<<"Ingrese la primera nota: ";
    cin>>nota1;
    while (nota1<=0)
    {
        if (nota1<=0)
        {
        cout<<"La nota no puede ser menor ni igual a 0."<<endl;
        cout<<"Ingrese la primera nota nuevamente: ";
        cin>>nota1;
        }
    }
    cout<<"Ingrese la segunda nota: ";
    cin>>nota2;
    while (nota2<=0)
    {
        if (nota2<=0)
        {
        cout<<"La nota no puede ser menor ni igual a 0."<<endl;
        cout<<"Ingrese la segunda nota nuevamente: ";
        cin>>nota2;
        }
    }
    cout<<"El promedio aritmetico de las notas ingresadas es: "<<calcularPromedio(nota1,nota2,promedio);
    return 0;
}
float calcularPromedio(float nota1, float nota2, float promedio)
{
    promedio=(nota1+nota2)/2;
    return promedio;
}