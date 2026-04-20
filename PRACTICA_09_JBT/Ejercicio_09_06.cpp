// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 20/04/2026 

#include <iostream>

using namespace std;

int main()
{
    system("chcp 65001");
    system ("cls");

    int N=0;
    int M=0;
    cout<<"Ingrese el número de filas: ";
    cin>>N;
    cout<<"Ingrese el número de columnas: ";
    cin>>M;
    int matriz[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<<"Digite el número de la posición: ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"La matríz original es: "<<endl;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout<<matriz[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<"\nLa matríz traspuesta es: "<<endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}