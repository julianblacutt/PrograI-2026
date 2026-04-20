// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    system ("chcp 65001");
    system ("cls");

    string entrada;
    string salida;

    cout<<"Ingrese una cadena variada (ej. hola123jaja87mundo103): ";
    getline(cin,entrada);

    for (int i = 0; i < entrada.size(); i++)
    {
        if (entrada[i]<'0'||entrada[i]>'9')
        {
            salida+=entrada[i];
        }
    }
    cout<<"El texto de entrada es: "<<entrada<<endl;
    cout<<"El texto de salida es: "<<salida<<endl;

    return 0;
}