// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/04/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int liminf, int limsup);
void llenarMatrix(char matrix[100][100], int n, int m);
void imprimirMatrix(char matrix[100][100], int n, int m);
void muertosFilas(char matrix[100][100], int n, int m);
void muertosColumnas(char matrix[100][100], int n, int m);
void determinarPosMuertos(char matrix[100][100],int n, int m);
void posibilidadPaso(char matrix[100][100], int n, int m);

int main()
{
    system ("chcp 65001");
    system ("cls");
    srand(time(0));

    char matrix[100][100];
    int n=0;
    int m=0;
    cout<<"La zona del complejo es batante extensa, Rick hizo un mapa pero..."<<endl;
    cout<<"será mejor que definas por dónde irás."<<endl;
    cout<<"Cuántas filas n deseas abarcar: ";
    cin>>n;
    cout<<"Cuántas columnas m deseas abarcar: ";
    cin>>m;

    GenerarAleatorio(0, 3);
    llenarMatrix(matrix, n, m);
    imprimirMatrix(matrix, n, m);
    muertosFilas(matrix, n, m);
    muertosColumnas(matrix, n, m);
    determinarPosMuertos(matrix, n, m);
    posibilidadPaso(matrix, n, m);

    return 0;
}
int GenerarAleatorio(int liminf, int limsup)
{
    int aleatorio=0;
    aleatorio=(rand()%limsup-liminf-1)+liminf;
    return aleatorio;
}
void llenarMatrix(char matrix[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=GenerarAleatorio(0,3);
            if (GenerarAleatorio(0,3)==0)
            {
                matrix[i][j]='X';
            }
            else
            {
                matrix[i][j]='O';
            }
        }
    }
}
void imprimirMatrix(char matrix[100][100], int n, int m)
{
    cout<<"\nMAPA GENERADO"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
void muertosFilas(char matrix[100][100], int n, int m)
{
    int contador;
    for (int i = 0; i < n; i++)
    {
        contador=0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j]=='X')
            {
                contador++;
            }
        }
        if (contador==0)
        {
            cout<<"La fila "<<i<<" NO tiene muertos vivientes."<<endl;
        }
    }
}
void muertosColumnas(char matrix[100][100], int n, int m)
{
    int contador;
    for (int i = 0; i < n; i++)
    {
        contador=0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[j][i]=='X')
            {
                contador++;
            }
        }
        if (contador==0)
        {
            cout<<"La columna "<<i<<" NO tiene muertos vivientes."<<endl;
        }
    }
}
void determinarPosMuertos(char matrix[100][100],int n, int m)
{
    int cantmuertos=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j]=='X')
            {
                cout<<"Muerto viviente en la posición ["<<i<<"]["<<j<<"]."<<endl;
                cantmuertos++;
            }            
        }
    }
    cout<<"La cantidad de muertos en total es: "<<cantmuertos<<endl;
}
void posibilidadPaso(char matrix[100][100], int n, int m)
{
    int contador=0;
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0]=='X')
        {
            contador++;
        }
    }
    if (contador>=2)
    {
        cout<<"NO ES POSIBLE entrar al complejo.";
    }
    else
    {
        cout<<"ES POSIBLE entrar al complejo.";
    }
}