// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 


#include <iostream>
#include <cstdlib> //para usar srand y rand
#include <ctime> //funcion para sacar el tiempo
using namespace std;

int main ()
{
    int numUsuario=0;
    int numAleatorio=0;
    int numIntentos=0;
    
    system("cls");

    srand(time(0)); //de esta forma se inicia la semilla
    numAleatorio= rand() % 100+1; //se evita el 0 gracias al "+1"

    cout<<"Piensa, ingresa y adivina un numero aleatorio perteneciente al rango 1-100"<<endl;
    do
    {
        cout <<"Ingresa tu numero: ";
        cin>> numUsuario;
        numIntentos++;
        if (numUsuario<numAleatorio)
        {
            cout<<"Su numero ingresado es MENOR al aleatorio."<<endl;
        }
        if (numUsuario>numAleatorio)
        {
            cout<<"Su numero ingresado es MAYOR al aleatorio."<<endl;
        }
        if (numUsuario==numAleatorio)
        {
            cout<<"Acertaste el numero, bien hecho."<<endl;
        }
        //Utilicé tres if para evitarme errores en la impresion de los textos
    } while (numUsuario!=numAleatorio);

    cout<<"El numero de intentos que le tomo adivinar fue de "<<numIntentos<<" intentos."<<endl;
    
    return 0;
}