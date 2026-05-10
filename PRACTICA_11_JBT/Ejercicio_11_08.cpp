// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int recursividad(int n);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int n=0;

    cout<<"Ingrese su número: ";
    cin>>n;
    cout<<n<<"\t";
    recursividad(n);

    return 0;
}
int recursividad(int n)
{
    if (n==1)
    {
        cout<<"\t";
        return 1;
    }
    if (n%2==0)
    {
        cout<<n/2<<"\t";
        return recursividad(n/2);
    }
    else
    {
        cout<<(n*3+1)<<"\t";
        return recursividad(n*3+1);
    }
}