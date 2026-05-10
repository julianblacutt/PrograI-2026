// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int sumadigitos(int n);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int n=0;
    int suma=0;

    cout<<"Ingrese su número: ";
    cin>>n;
    cout<<"La suma de los dígitos es: "<<sumadigitos(n);

    return 0;
}
int sumadigitos(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n%10+sumadigitos(n/10);
    } 
}