// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int euclides(int a, int b);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int a=0;
    int b=0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"El mcd de los números es: "<<euclides(a,b);

    return 0;
}
int euclides(int a, int b)
{
    if (a%b==0)
    {
        return b;
    }
    else
    {
        int div=a%b;
        return euclides(b,div);
    }
}