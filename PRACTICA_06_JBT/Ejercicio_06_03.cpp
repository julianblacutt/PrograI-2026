// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

void ModificarValores(int VAL, int &REF);
int main()
{
    system ("chcp 65001");
    system ("cls");
    int valVal=0;
    int valRef=0;

    cout<<"Ingrese el primer valor: ";
    cin>>valVal;

    cout<<"Ingrese el segundo valor: ";
    cin>>valRef;

    ModificarValores(valVal, valRef);
    cout<<"Se ha realizado la modificación de los valores"<<endl;
    cout<<"El valor por valor es: "<<valVal<<endl;
    cout<<"El valor por referencia es: "<<valRef<<endl;
 
    return 0;
}

void ModificarValores(int VAL, int &REF) {
    VAL = VAL * 2;        
    REF = REF + 10; 
}