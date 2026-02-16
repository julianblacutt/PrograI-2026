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
    float notaPracticas=0; 
    float notaTeorica=0; 
    float notaParticipacion=0;
    float promedio=0;

    system("cls");
    cout <<"Ingrese la nota de las practicas: ";
    cin >> notaPracticas;
    cout <<"Ingrese la nota teorica: " ;
    cin >> notaTeorica;
    cout <<"Ingrese la nota de la participacion: ";
    cin >> notaParticipacion;

    //Operacion del promedio
    promedio=(notaPracticas*0.30)+(notaTeorica*0.60)+(notaParticipacion*0.10);
    //El promedio es ponderado, es decir que no se debe dividir entre 3 las notas ingresadas

    //Salida
    cout <<"\nEl promedio obtenido es: "<< promedio <<endl;
    return 0;
}