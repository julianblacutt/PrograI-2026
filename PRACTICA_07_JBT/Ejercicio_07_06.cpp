// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresarDatos (int N);
vector<int> sumar (vector<int> vec1, vector<int> vec2);
int main()
{
    system("chcp 65001");
    system("cls");

    int N=5;

    cout<<"\nIngrese los datos del primer vector:\n";
    vector<int>vec1=ingresarDatos(N);
    cout<<"\nIngrese los datos del segundo vector:\n";
    vector<int>vec2=ingresarDatos(N);
    vector<int>vec3=sumar(vec1,vec2);

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
    cout<<"\nEl resultado de la suma es: ";
    for (int i = 0; i < N; i++)
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
vector<int> sumar (vector<int> vec1, vector<int> vec2)
{
    vector<int> vec3(vec1.size());
    for(int i = 0; i < vec1.size(); i++){
        vec3[i] = vec1[i] + vec2[i];
    }

    return vec3;
}