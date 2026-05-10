// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>
#include <vector>

using namespace std;

int sumaelementos(vector<int>numeros, int n);
int main()
{
    system("chcp 65001");
    system("cls");

    vector<int>numeros;
    int n=0;

    cout<<"Ingrese el tamaño de su vector: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int num=0;
        cout<<"Ingrese los valores de su vector: ";
        cin>>num;
        numeros.push_back(num);
    }
    cout<<endl;
    cout<<"Su vector es: ";
    for (int i = 0; i < numeros.size(); i++)
    {
        cout<<numeros[i]<<"  ";
    }
    cout<<"\nLa suma de sus elementos es: "<<sumaelementos(numeros, n);
    return 0;
}
int sumaelementos(vector<int>numeros, int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return numeros[n-1]+sumaelementos(numeros, n-1);
    }
}