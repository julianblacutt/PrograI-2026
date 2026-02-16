// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>
#include <cmath> //para calcular la raiz cuadrada

using namespace std;

int main ()
{
    //Datos
    float cateto1=0; 
    float cateto2=0; 
    float hipotenusa=0;

    system("cls");
    cout <<"Se obtendra la hipotenusa de un triangulo rectangulo"<<endl;
    cout <<"Ingrese el primer cateto: ";
    cin >> cateto1;
    cout <<"Ingrese el segundo cateto: " ;
    cin >> cateto2;

    //Salida
    hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
    cout <<"\nLa hipotenusa de su triangulo rectangulo es: "<< hipotenusa <<endl;
    return 0;
}