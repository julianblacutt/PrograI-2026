// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

float calcularArea(float base, float altura);
int main ()
{
    system ("cls");
    float base=0.0;
    float altura=0.0;

    cout<<"Se calculara el area de un triangulo"<<endl;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>altura;

    while (base<=0)
    {
        if (base<=0)
        {
        cout<<"La base no puede ser negativa o igual a 0"<<endl;
        cout<<"Ingrese nuevamente: ";
        cin>>base;
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
    cout<<"El area el triangulo es: "<<calcularArea(base,altura);
    return 0;
}
float calcularArea(float base, float altura)
{
    float area=0.0;
    area=(base*altura)/2;
    return area;
}