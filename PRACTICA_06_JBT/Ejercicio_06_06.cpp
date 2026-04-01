// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

void calcularTiempo(int totalSeg, int &horas, int &minutos, int &segundos);
int main()
{
    system ("chcp 65001");
    system ("cls");
    
    int totalSeg=0;
    int horas=0;
    int minutos=0;
    int segundos=0;

    cout<<"Ingrese la cantidad total de segundos que desea transformar: ";
    cin>>totalSeg;
    calcularTiempo(totalSeg, horas, minutos, segundos);
    cout<<"Hr: "<<horas;
    cout<<"\tMin: "<<minutos;
    cout<<"\tSeg: "<<segundos;

    return 0;
}
void calcularTiempo(int totalSeg, int &horas, int &minutos, int &segundos)
{
    horas=totalSeg/3600;
    minutos=(totalSeg%3600)/60;
    segundos=totalSeg%60;
}