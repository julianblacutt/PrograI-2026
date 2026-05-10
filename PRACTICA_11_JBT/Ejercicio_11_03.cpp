// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int fibonacci (int n,int a,int b);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int n=0;
    int a=0;//empieza en 0
    int b=1;//empieza en 1

    cout<<"Ingrese el número: ";
    cin>>n;
    cout<<"El resultado de la secuencia de Fibonacci es: "<<fibonacci(n,a,b);
    return 0;
}
int fibonacci(int n, int a, int b)
{
    if (n==0)
    {
        return a;
    }
    else
    {
        return fibonacci(n-1, b, a+b);
    }
}