// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>
#define PI 3.14159
using namespace std;

float calcularVolumen(float radio, float altura);
int main ()
{
    system ("cls");
    float radio=0.0;
    float altura=0.0;

    cout<<"Se calculara el volumen de un cilindro"<<endl;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    cout<<"Ingrese la altura: ";
    cin>>altura;

    while (radio<=0)
    {
        if (radio<=0)
        {
        cout<<"El radio no puede ser negativo o igual a 0"<<endl;
        cout<<"Ingrese nuevamente: ";
        cin>>radio;
        }
    }
    while (altura<=0)
    {
        if (altura<=0)
        {
        cout<<"La altura no puede ser negativa o igual a 0"<<endl;
        cout<<"Ingrese nuevamente: ";
        cin>>altura;
        }
    }
    cout<<"El volumen del cilindro es: "<<calcularVolumen(radio,altura);
    return 0;
}
float calcularVolumen(float radio, float altura)
{
    float volumen=0.0;
    volumen=PI*radio*radio*altura;
    return volumen;
}