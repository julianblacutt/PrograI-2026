// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{

    //Datos
    int edad=0; 
    char sexo; 
    float altura=0;

    system("cls");
    cout <<"Ingrese su edad: ";
    cin >> edad;
    cout <<"Ingrese su sexo (H/M): " ;
    cin >> sexo;
    cout <<"Ingrese su altura en metros: ";
    cin >> altura;

    //Salida
    cout <<"\nLos datos ingresados fueron: "<<endl;
    cout <<"Edad: "<< edad <<endl;
    cout <<"Sexo: "<< sexo <<endl;
    cout <<"Altura en metros: "<< altura<<endl;
    return 0;
}