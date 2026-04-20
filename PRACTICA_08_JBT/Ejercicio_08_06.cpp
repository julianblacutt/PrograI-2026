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

    string oracion;
    string palabras="";
    vector<string>oracionInvertida;

    cout<<"Ingrese una oracion por favor: ";
    getline(cin,oracion);

    for (int i = 0; i < oracion.size(); i++)
    {
        if (oracion[i]!=' ')
        {
            palabras+=oracion[i];
        }
        else
        {
            oracionInvertida.push_back(palabras);
            palabras="";
        }
    }
    if (palabras != "")
    {
        oracionInvertida.push_back(palabras);
    }
    cout<<"La oración ingresada es: "<<oracion<<endl;
    cout<<"La oración invertida es: ";
    for (int i = oracionInvertida.size()-1; i >= 0 ; i--)
    {
        cout<<oracionInvertida[i]<<" ";
    }
    return 0;
}