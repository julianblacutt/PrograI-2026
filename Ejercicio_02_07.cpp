// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 


#include <iostream>

using namespace std;

int main ()
{
    int numEntero=0;
    int sumaDivisores=0;
    
    system("cls");

    cout<<"Ingrese el numero entero: ";
    cin>>numEntero;
    
    while (numEntero<=0)
    {
        if (numEntero<=0)
        {
            cout<<"Recuerda que el numero no debe ser menor ni igual a 0"<<endl;
            cout<<"Ingresa el numero nuevamente: ";
            cin>>numEntero;
        }
    }
    
    for (int i = 1; i < numEntero; i++)
    {
        if (numEntero%i==0)
        {
            sumaDivisores += i;
        }
    }
    
    if (sumaDivisores==numEntero)
    {
        cout<<"El numero ingresado "<<numEntero<<" ES PERFECTO.";
        
    }
    else
    {
        cout<<"El numero ingresado "<<numEntero<<" NO ES PERFECTO.";
    }
    
    return 0;
}