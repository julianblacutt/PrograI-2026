// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 

#include <iostream>
using namespace std;

int main ()
{
    int num=0;
    
    system("cls");
    cout <<"Ingrese un numero entero del 1 al 10: ";
    cin >> num;

    if (num>=1 && num<=10) //El numero no puede ser menor a 1 ni mayor a 10
    {
        cout<<"La tabla de multiplicar de "<<num<<" es: "<<endl; //Mensaje previo a la operacion
        for (int i = 1; i <= 10; i++) //i empieza en 1 y llegara hasta 10 uno en uno
        {
            cout<<num<<" x "<<i<<" = "<<num*i<<endl; //no es necesaria una variable para los resultados
        }
        
    }   // la "x" y el "=" son solo por estética, no afecta en nada si los uso o no

    return 0;
}

