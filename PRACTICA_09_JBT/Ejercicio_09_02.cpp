// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/04/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int GenerarAleatorio(int liminf, int limsup);
void llenarMatrix(int matrix[100][100], int N, int A, int B);
void imprimirMatrix(int matrix[100][100], int N, int A, int B);
int sumaColumna(int matriz[100][100], int N);
int productoFila(int matrix[100][100], int N);
void encontrarMayor(int matrix[100][100], int N, int &fila, int &col, int &mayor);
int MediaMatriz(int matrix[100][100], int N);
int DesviacionEstandarMatriz(int matrix[100][100], int N);

int main()
{
    system ("chcp 65001");
    system ("cls");
    srand(time(0));

    int N=0;
    int A=0;
    int B=0;
    int fila=0;
    int col=0;
    int mayor=0;
    int matrix[100][100];

    cout<<"Se realizarán diferentes operaciones con la matríz."<<endl;
    cout<<"Ingrese el tamaño N de la matríz: ";
    cin>>N;
    cout<<"Ingrese el valor de A: ";
    cin>>A;
    cout<<"Ingrese el valor de B: ";
    cin>>B;

    GenerarAleatorio(A, B);
    llenarMatrix(matrix, N, A, B);
    imprimirMatrix(matrix, N, A, B);
    cout<<"\nLa suma de los valores de la última columna es: "<<sumaColumna(matrix, N)<<endl;
    cout<<"El producto de los valores de la última fila es: "<<productoFila(matrix, N)<<endl;
    mayor=A;
    encontrarMayor(matrix, N, fila, col, mayor);
    cout<<"El número mayor en la matríz es: "<<mayor<<endl;
    cout<<"El mayor se encuentra en la fila ["<<fila<<"] columna ["<<col<<"]."<<endl;
    cout<<"La desviación estándar es: "<<DesviacionEstandarMatriz(matrix, N);
    return 0;
}
int GenerarAleatorio(int liminf, int limsup)
{
    int aleatorio=0;
    aleatorio=(rand()%limsup-liminf-1)+liminf;
    return aleatorio;
}
void llenarMatrix(int matrix[100][100], int N, int A, int B)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j]=GenerarAleatorio(A,B);
        }
    }
}
void imprimirMatrix(int matrix[100][100], int N, int A, int B)
{
    cout<<"\nMATRIZ GENERADA"<<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int sumaColumna(int matrix[100][100], int N)
{
    int suma=0;
    for (int i = 0; i < N; i++)
    {
        suma+=matrix[i][N-1];
    }
    return suma;
}
int productoFila(int matrix[100][100], int N)
{
    int producto=1;
    for (int j = 0; j < N; j++)
    {
        producto*=matrix[N-1][j];
    }
    return producto;
}
void encontrarMayor(int matrix[100][100], int N, int &fila, int &col, int &mayor)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j]>mayor)
            {
                mayor=matrix[i][j];
                fila=i;
                col=j;
            }
        }
    }
}
int MediaMatriz(int matrix[100][100], int N)
{
    int media = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            media = media + matrix[i][j];
        }
    }
    return media / ( N * N );
}
int DesviacionEstandarMatriz(int matrix[100][100], int N)
{
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            total = total + pow(matrix[i][j] - MediaMatriz(matrix, N), 2);
        }
    }
    total = sqrtl(total / (N * N));
    return total;
}