// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 15/02/2026 

#include <iostream>

using namespace std;

int main ()
{

    //Datos
    int num1=0;
    int num2=0;
    int suma=0;
    int resta=0;
    int multiplicacion=0;
    int division=0;

    system("cls");
    cout <<"Ingrese el primer numero: " << endl;
    cin >> num1;
    cout <<"Ingrese el segundo numero: " << endl;
    cin >> num2;

    //Operaciones matematicas
    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    division=num1/num2;

    cout <<"La suma entre los numeros es: " << suma << endl;
    cout <<"La resta entre los numeros es: " << resta << endl;
    cout <<"La multiplicacion entre los numeros es: " << multiplicacion << endl;
    cout <<"La division entre los numeros es:" << division << endl;
return 0;
}