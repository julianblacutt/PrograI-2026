// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{
    //Dato
    int numEntero=0; 

    system("cls");
    cout <<"Ingrese un numero entero: ";
    cin >> numEntero;

    //Salida
    if (numEntero%2==0)
    {
        cout <<"El numero "<< numEntero << " es par.";
    }
    else
    {
        cout <<"El numero "<< numEntero << " es impar.";
    }
    return 0;
}