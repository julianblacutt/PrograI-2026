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
    int sumaTodos=0;
    int sumaPares=0;
    int sumaImpares=0;
    int sumaPrimos=0;
    
    system("cls");

    do
    {
        cout <<"Ingrese un numero entero del 1 al 100 (si coloca 0 el programa terminara): ";
        cin >> num;
        if (num>=1 && num<=100) //if para la suma de todos los numeros ingresados
        {
            sumaTodos += num;
            if (num%2==0)//if para la suma de los pares
            {
                sumaPares += num;
            }
            else//para la suma de los impares
            {
                sumaImpares += num;
            }
        }
        if (num>1)
        {
            int i=2; //empieza en dos porque es necesario conocer divisores diferentes de 1
            bool numPrimo=true; 
            while (i<num)
            {
                if (num%i==0)
                {
                    numPrimo=false;
                }
                i++; //i va aumentando de uno en uno
            }
        if (numPrimo) //solo si la operacion permite el true, se realizará la suma de los numeros primos
        {
            sumaPrimos += num;
        }
            
        }

    } while (num!=0);
    cout<<"\nLa suma de todos los numeros ingresados es: "<<sumaTodos<<endl;
    cout<<"La suma de todos los numeros pares es: "<<sumaPares<<endl;
    cout<<"La suma de todos los numeros impares es: "<<sumaImpares<<endl;
    cout<<"La suma de todos los numeros primos es: "<<sumaPrimos<<endl;
    return 0;
}