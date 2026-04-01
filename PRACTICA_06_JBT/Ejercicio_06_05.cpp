// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
float calcularArea(float radio, float PI);
int main()
{
    system ("chcp 65001");
    system ("cls");
    double lado=0.0;
    double base=0.0;
    double altura=0.0;
    float radio=0.0;
    const float PI=3.14159;

    cout<<"Se realizará el cálculo de distintas áreas."<<endl;
    cout<<"Ingrese el lado: ";
    cin>>lado;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    cout<<"Ingrese el radio: ";
    cin>>radio;

    cout<<"El area del cuadrado de lado "<<lado<<" es: "<<calcularArea(lado)<<endl;
    cout<<"El area del rectángulo de base "<<base<<" y de altura "<<altura<<" es: "<<calcularArea(base, altura)<<endl;
    cout<<"El area del círculo de radio "<<radio<<" es: "<<calcularArea(radio, PI)<<endl;

    return 0;
}
double calcularArea(double lado)
{
    return lado*lado;
}
double calcularArea(double base, double altura)
{
    return base*altura;
}
float calcularArea(float radio, float PI)
{
    return radio*radio*PI;
}
    