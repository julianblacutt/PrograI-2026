// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 

#include <iostream>
using namespace std;

int main ()
{
    int n=0;
    int suma=0;
    
    system("cls");

    cout<<"Ingrese un numero n que sea entero y positivo distinto de 0: ";
    cin>>n;

    if (n>0)
    {
        for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout<<"La suma empezando de 1 hasta la n ingresada " << n << " es = "<<suma<<endl;
    }
    else 
    {
        cout<<"El numero n debe ser mayor y distinto de 0"<<endl;
    }
    return 0;
}