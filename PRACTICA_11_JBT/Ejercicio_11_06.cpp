// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 10/05/2026 

#include <iostream>
#include <vector>

using namespace std;

bool comparar(vector<int>&vec1, vector<int>&vec2, int n);
int main()
{
    system ("chcp 65001");
    system ("cls");

    vector<int>vec1;
    vector<int>vec2;
    int n=0;

    cout<<"Ingrese el tamaño de sus vectores: ";
    cin>>n;
    cout<<"\nPRIMER VECTOR"<<endl;
    for (int i = 0; i < n; i++)
    {
        int num=0;
        cout<<"Ingrese los valores: ";
        cin>>num;
        vec1.push_back(num);
    }
    cout<<"\nSEGUNDO VECTOR"<<endl;
    for (int i = 0; i < n; i++)
    {
        int num=0;
        cout<<"Ingrese los valores: ";
        cin>>num;
        vec2.push_back(num);
    }
    cout<<"\nEl primer vector es: ";
    for (int i = 0; i < n; i++)
    {
        cout<<vec1[i]<<"\t";
    }
    cout<<"\nEl segundo vector es: ";
    for (int i = 0; i < n; i++)
    {
        cout<<vec2[i]<<"\t";
    }
    if (comparar(vec1, vec2, n))
    {
        cout<<"\nLos vectores son iguales.";
    }
    else
    {
        cout<<"\nLos vectores no son iguales.";
    }
    
    return 0;
}
bool comparar(vector<int>&vec1, vector<int>&vec2, int n)
{
    if (n==0)
    {
        return true;
    }
    if (vec1[n-1] != vec2[n-1])
    {
        return false;
    }    
    return comparar(vec1, vec2, n-1);
}