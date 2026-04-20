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

    string tokenentrada;
    string tokensalida;

    cout<<"El token de entrada será: ";
    getline(cin,tokenentrada);

    for (int i = 0; i < tokenentrada.size(); i++)
    {
        if (tokenentrada[i]!=',')
        {
            tokensalida+=tokenentrada[i];
        }
    }
    cout<<"El token de entrada es: "<<tokenentrada<<endl;
    cout<<"El token de salida es: "<<tokensalida<<endl;

    return 0;
}