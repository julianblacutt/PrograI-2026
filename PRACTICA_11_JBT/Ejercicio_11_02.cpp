// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 08/05/2026 

#include <iostream>

using namespace std;

int potencia(int a, int n);
int main()
{
    system("chcp 65001");
    system("cls");

    int a=0;
    int n=0;
    
    cout<<"Ingrese el valor de la base: ";
    cin>>a;
    cout<<"Ingrese el valor de la potencia: ";
    cin>>n;
    cout<<"El número "<<a<<" elevado a la potencia "<<n<<" da como resultado: "<<potencia(a,n);

    return 0;
}
int potencia(int a, int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return a*potencia(a,n-1);
    }
}
