// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorios(int liminf, int limsup);
int main()
{
    system ("chcp 65001");
    system ("cls");
    srand(time(0));

    int n=0;
    int reprobados=0;
    int regular=0;
    int bueno=0;
    int excelente=0;

    
    cout<<"Ingrese la cantidad de calificaciones: ";
    cin>>n;
    vector<int>calificaciones;
    for (int i = 0; i < n; i++)
    {
        calificaciones.push_back(GenerarAleatorios(0,100));
        if ((calificaciones[i]>=0)&&(calificaciones[i]<=59))
        {
            reprobados++;
        }
        if ((calificaciones[i]>=60)&&(calificaciones[i]<=79))
        {
            regular++;
        }
        if ((calificaciones[i]>=80)&&(calificaciones[i]<=89))
        {
            bueno++;
        }
        if ((calificaciones[i]>=90)&&(calificaciones[i]<=100))
        {
            excelente++;
        }
    }
    cout<<"Las calificaciones son: ";
    for (int i = 0; i < n; i++)
    {
        cout<<calificaciones[i]<<"\t";
    }
    cout<<"\nLos porcentajes correspondientes son: "<<endl;
    cout<<"Reprobados: "<<(reprobados*100.0)/n<<"%";
    cout<<"\nRegulares: "<<(regular*100.0)/n<<"%";
    cout<<"\nBuenos: "<<(bueno*100.0)/n<<"%";
    cout<<"\nExcelentes: "<<(excelente*100.0)/n<<"%";
    return 0;
}
int GenerarAleatorios(int liminf, int limsup)
{
    int aleatorio=0;
    aleatorio=(rand()%(limsup-liminf+1)+liminf);
    return aleatorio;
}