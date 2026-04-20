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

    cout<<"Ingrese los datos."<<endl;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese M: ";
    cin >> M;

    int matrizA[50][50];
    int matrizB[50][50];
    int matrizC[50][50];

    // matriz A
    cout<<"Para matriz A."<<endl;
    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<M ; j++)
        {
            cout<<"Ingrese el dígito ["<<i<<"]["<<j<<"]: ";
            cin >> matrizA[i][j];
        }
    }
    // matriz B
    cout<<"Para matriz B."<<endl;
    for(int i=0 ; i<M ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            cout<<"Ingrese el dígito ["<<i<<"]["<<j<<"]: ";
            cin >> matrizB[i][j];
        }
    }
    // matriz multiplicacion
    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            matrizC[i][j] = 0;

            int k = 0;
            while(k < M)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                k++;
            }
        }
    }

    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}