// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/04/2026

#include <iostream>

using namespace std;

int main()
{
    system("chcp 65001");
    system("cls");

    float voltios[9]={11.95,16.32,12.15,8.22,15.98,26.22,13.54,6.45,17.59};
    float matriz[3][3];
    int k=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j]=voltios[k];
            k++;
        }
    }
    cout<<"Los valores del vector son: ";
    for (int i = 0; i < 9; i++)
    {
        cout<<voltios[i]<<"  ";
    }
    cout<<"\nLos valores en forma de matríz son: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}