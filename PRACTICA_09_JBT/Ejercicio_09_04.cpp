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

    int n = 5;
    int matriz[10][10];

    for(int i = 0; i < n; i++)
    {
        int valor = i + 1;

        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = valor;
            valor += 2; 
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}