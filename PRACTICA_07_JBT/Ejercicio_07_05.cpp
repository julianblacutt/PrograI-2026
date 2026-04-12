// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresarDatos (int N);
int main()
{
    system("chcp 65001");
    system("cls");

    int N=0;

    cout<<"Ingrese el tamaño de sus vectores: ";
    cin>>N;
    cout<<"Ingrese los datos del primer vector:\n";
    vector<int>vec1=ingresarDatos(N);
    cout<<"Ingrese los datos del segundo vector:\n";
    vector<int>vec2=ingresarDatos(N);
    vector<int>vec3;
    for (int i = 0; i < N; i++)
    {
        vec3.push_back(vec1[i]);
    }
    for (int i = 0; i < N; i++)
    {
        vec3.push_back(vec2[i]);
    }


    cout<<"\nEl vector1 es: ";
    for (int i = 0; i < N; i++)
    {
        cout<<vec1[i]<<"  ";
    }
    cout<<"\nEl vector2 es: ";
    for (int i = 0; i < N; i++)
    {
        cout<<vec2[i]<<"  ";
    }
    cout<<"\nEl vector combinado es: ";
    for (int i = 0; i < vec3.size(); i++)
    {
        cout<<vec3[i]<<"  ";
    }
    return 0;
}

vector<int> ingresarDatos (int N)
{
    vector<int> veci(N);
    for(int i = 0; i < N; i++){
        cout << "Ingrese la posicion " << i << ": ";
        cin >> veci[i];
    }
    return veci;
}