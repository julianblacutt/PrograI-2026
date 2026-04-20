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

    vector<string>lista1={"Julian","José","Canela","Daniela","Fernando","Amanda","Nathaly","Jesús","Hércules","Hestia"};
    vector<string>lista2={"Julian","Carlos","José","Belén","Mariana","Alejando","Nathaly","Canela","Mauro","Hestia"};
    vector<string>encomun;

    for (int i = 0; i < lista1.size(); i++)
    {
        for (int j = 0; j < lista2.size(); j++)
        {
            if (lista1[i]==lista2[j])
            {
                encomun.push_back(lista1[i]);
            }
            
        }
        
    }
    cout<<"La lista de la primera empresa es: ";
    for (int i = 0; i < lista1.size(); i++)
    {
        cout<<lista1[i]<<"\t";
    }
    cout<<"\nLa lista de la segunda empresa es: ";
    for (int i = 0; i < lista2.size(); i++)
    {
        cout<<lista2[i]<<"\t";
    }
    cout<<"\nLa lista de las personas en comun es: ";
    for (int i = 0; i < encomun.size(); i++)
    {
        cout<<encomun[i]<<"\t";
    }
    cout<<"\nEl total de personas en común es: "<<encomun.size();
    return 0;
}