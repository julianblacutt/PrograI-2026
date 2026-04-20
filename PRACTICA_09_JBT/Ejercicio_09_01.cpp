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

    int filas=0;
    int columnas=0;
    int n=0;

    cout<<"Ingrese el número de filas de su matríz: ";
    cin>>filas;
    cout<<"Ingrese el número de columnas de su matríz: ";
    cin>>columnas;
    int matriz[filas][columnas];

    cout<<"Agregue elementos a su matríz: "<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Digite el número de la posición ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    
    cout<<"La matriz original es: "<<endl;
    for (int i = 0; i < filas; i++)
    {
        cout<<"\t";
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int j = 0; j < columnas; j++)
    {
        int temp=matriz[0][j];
        matriz[0][j]=matriz[filas-1][j];
        matriz[filas-1][j]=temp;
    }

    cout << "\nLa matríz resultante es:" << endl;
    for(int i = 0; i < filas; i++) 
    {
        cout<<"\t";
        for(int j = 0; j < columnas; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}