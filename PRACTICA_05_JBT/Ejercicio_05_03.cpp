// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

float calcularSalario(int horasTrabajadas, float tarifaHora, float salario);
float Bonificacion(int horasTrabajadas, float salario, float bonificacion, float tarifaHora, float salarioBonif);
int main()
{
    system("cls");
    int horasTrabajadas=0;
    float tarifaHora=0.0;
    float bonificacion=0.0;
    float salario=0.0;
    float salarioBonif=0.0;

    cout<<"Ingrese las horas trabajadas: ";
    cin>>horasTrabajadas;
    while (horasTrabajadas<=0)
    {
        if (horasTrabajadas<=0)
        {
        cout<<"Dudo que haya trabajado 0 u horas negativas."<<endl;
        cout<<"Ingrese las horas nuevamente: ";
        cin>>horasTrabajadas;
        }
    }
    cout<<"Ingrese su tarifa por hora: ";
    cin>>tarifaHora;
    while (tarifaHora<=0)
    {
        if (tarifaHora<=0)
        {
        cout<<"Dudo que su tarifa sea negativa o igual a 0."<<endl;
        cout<<"Ingrese la tarifa nuevamente: ";
        cin>>tarifaHora;
        }
    }
    
    if (horasTrabajadas<=8)
    {
    cout<<"Su salario sera igual a: "<<calcularSalario(horasTrabajadas,tarifaHora,salario);
    }
    if (horasTrabajadas>8)
    {
    cout<<"Ingrese su bonificacion de trabajo: ";
    cin>>bonificacion;
    cout<<"Su salario sera igual a: "<<calcularSalario(horasTrabajadas,tarifaHora,salario)<<endl;
    cout<<"Su salario por haber trabajado mas de 8 horas es igual a: "<<Bonificacion(horasTrabajadas, salario, bonificacion,tarifaHora,salarioBonif);
    }
    return 0;
}
float calcularSalario(int horasTrabajadas, float tarifaHora, float salario)
{
    salario=tarifaHora*horasTrabajadas;
    return salario;
}
float Bonificacion(int horasTrabajadas, float salario, float bonificacion, float tarifaHora, float salarioBonif)
{
    if (horasTrabajadas>8)
    {
    salario=calcularSalario(horasTrabajadas,tarifaHora,salario);
    salarioBonif=salario+((horasTrabajadas-8)*bonificacion);
    }
    return salarioBonif;
}