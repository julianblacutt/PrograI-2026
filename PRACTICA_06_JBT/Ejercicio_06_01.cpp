// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

void IntercambiarValores(int &val1, int &val2);
int main()
{
    system ("chcp 65001");
    system ("cls");
    int val1=0;
    int val2=0;

    cout<<"Ingrese el primer valor: ";
    cin>>val1;

    cout<<"Ingrese el segundo valor: ";
    cin>>val2;

    cout<<"Antes del cambio"<<endl;
    cout<<"El valor 1 era: "<<val1<<endl;
    cout<<"El valor 2 era: "<<val2<<endl;

    cout<<"Después del cambio"<<endl;
    IntercambiarValores(val1, val2);
    cout<<"El valor 1 es: "<<val1<<endl;
    cout<<"El valor 2 es: "<<val2<<endl;
    
    return 0;
}
void IntercambiarValores(int &val1, int &val2)
{
    int cambio1=val1;
    int cambio2=val2;
    val2=cambio1;
    val1=cambio2;
}