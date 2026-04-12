// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    system("chcp 65001");
    system("cls");

    vector<int> vec;
    int numPosicion = 0;
    int i = 0;

    cout << "Ingrese numeros para el vector (num negativo para terminar):\n";

    while(i < 10 && numPosicion >= 0)
    {
        cout << "Posicion " << i << ": ";
        cin >> numPosicion;

        if(numPosicion >= 0){
            vec.push_back(numPosicion);
            i++;
        }
    }

    cout << "\nElementos ingresados: ";
    for(int j = 0; j < vec.size(); j++){
        cout << vec[j] << " ";
    }
    return 0;
}