// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int funcionalgoritmo(int n);
int main()
{
    system("chcp 65001");
    system("cls");

    int n=0;
    cout<<"Ingrese su número: ";
    cin>>n;
    cout<<"El resultado es: "<<funcionalgoritmo(n);

    return 0;
}
int funcionalgoritmo(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*n+funcionalgoritmo(n-1);
    }
}