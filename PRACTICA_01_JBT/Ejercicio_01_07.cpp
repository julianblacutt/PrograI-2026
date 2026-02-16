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
    int edad=0; 

    system("cls");
    cout <<"Ingrese una edad: ";
    cin >> edad;

    //Salida
    if (edad>=18 && edad<=25)
    {
        cout <<"La edad ingresada de "<< edad << " esta en el rango [18-25]";
    }
    else
    {
        cout <<"La edad ingresada de "<< edad << " NO esta en el rango [18-25]";
    }
    return 0;
}