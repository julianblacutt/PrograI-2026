// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>
#define PI 3.14159

using namespace std;

void CalcularVolumen(float radio, float altura, float &volumen);
int main()
{
    system ("chcp 65001");
    system ("cls");
    float radio=0.0;
    float altura=10.0;
    float volumen=0.0;


    cout<<"Se calculara el volumen del cilindro"<<endl;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    CalcularVolumen(radio, altura, volumen);
    cout<<"El volumen calculado con altura de 10 es: "<<volumen<<endl;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    CalcularVolumen(radio, altura, volumen);
    cout<<"El volumen calculado con altura propia es: "<<volumen<<endl;
    return 0;
}
void CalcularVolumen(float radio, float altura, float &volumen)
{
    volumen=PI*(radio*radio)*altura;
}
    