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
    int rango=0;

    
    cout<<"Ingrese la cantidad de pixeles: ";
    cin>>n;
    vector<int>pixeles;
    vector<int>rangos(26,0);
    for (int i = 0; i < n; i++)
    {
        pixeles.push_back(GenerarAleatorios(0,255));
        rangos[pixeles[i]/10]++;
    }
    cout<<"Los piexeles son: ";
    for (int i = 0; i < n; i++)
    {
        cout<<pixeles[i]<<"\t";
    }
    cout<<"\nLos rangos son: ";
    for (int i = 0; i < rangos.size(); i++)
    {
        cout<<"Rango "<<i*10<<"-"<<i*10+9<<": "<<rangos[i]<<endl;
    }
    
    return 0;
}
int GenerarAleatorios(int liminf, int limsup)
{
    int aleatorio=0;
    aleatorio=(rand()%(limsup-liminf+1)+liminf);
    return aleatorio;
}