// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 


#include <iostream>

using namespace std;

int main ()
{
    int valor1=0;
    int valor2=0;
    
    system("cls");

    cout<<"Ingrese el primer valor entero: ";
    cin>>valor1;
    cout<<"Ingrese el segundo valor entero (distinto al primero): ";
    cin>>valor2;
    while (valor1==valor2)
    {
        if (valor1==valor2)
        {
            cout<<"Recuerda que el segundo valor debe ser distinto al primero."<<endl;
            cout<<"Ingresa el segundo valor nuevamente: ";
            cin>>valor2;
        }
    }
    
    if (valor1>valor2)
    {
        cout<<"La serie descendente es: ";
        for (int i = valor1; i >= valor2; i--)
        {
            cout << i<<" ";
        }
        
    }
    if (valor1<valor2)
    {
        cout<<"La serie ascendente es: ";
        for (int i = valor1; i <= valor2; i++)
        {
            cout << i<<" ";
        }
        
    }
    
    return 0;
}