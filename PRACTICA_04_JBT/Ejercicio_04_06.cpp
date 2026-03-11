// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

int Sumatoria(int N, int sumatoria);
int main()
{
    system("cls");
    int N=0;
    int sumatoria=0;
    cout<<"Ingrese un numero N entero mayor a 0: ";
    cin>>N;

    while (N<=0)
    {
        if(N<=0)
        {
        cout<<"El numero N no puede ser menor ni igual a 0."<<endl;
        cout<<"Ingrese N nuevamente: ";
        cin>>N;
        }
    }
    cout<<"La sumatoria de los N numeros es igual a: "<<Sumatoria(N,sumatoria);
    return 0;
}
int Sumatoria(int N, int sumatoria)
{
    for (int i = 1; i <= N; i++)
    {
        sumatoria+=i;
    }
    return sumatoria;
}