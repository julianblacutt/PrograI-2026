// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

float calculoDistancia(float velocidad, float tiempo, float distancia);
int main()
{
    system("cls");
    float velocidad=0.0;
    float tiempo=0.0;
    float distancia=0.0;

    cout<<"Se calculara la distancia recorrida por un objeto."<<endl;
    cout<<"Ingrese su velocidad del objeto en metros/segundos: ";
    cin>>velocidad;
    while(velocidad<=0)
    {
        if (velocidad<=0)
        {
        cout<<"Si la velocidad es menor o igual a 0, el resultado sera erroneo."<<endl;
        cout<<"Ingrese el dato nuevamente: ";
        cin>>velocidad;
        }
    }
    cout<<"Ingrese el tiempo de recorrido en segundos: ";
    cin>>tiempo;
    while(tiempo<=0)
    {
        if (tiempo<=0)
        {
        cout<<"Si el tiempo es menor o igual a 0, el resultado sera erroneo."<<endl;
        cout<<"Ingrese el dato nuevamente: ";
        cin>>tiempo;
        }
    }
    cout<<"La distancia recorrida por el objeto es de: "<<calculoDistancia(velocidad,tiempo,distancia)<<" metros.";
    return 0;
}
float calculoDistancia(float velocidad, float tiempo, float distancia)
{
    distancia=velocidad*tiempo;
    return distancia;
}