// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 11/04/2026

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//funcion (a): Voltajes
//funcion (b): Temperaturas
//funcion (c): Alfanumericos
//funcion (d): Años
//funcion (f): Distancias

void funcion_A();
void funcion_B();
void funcion_C();
void funcion_D();
void funcion_E();
void funcion_F();

int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(0));

    int op=0;

    cout<<"Qué desea revisar? "<<endl;
    cout<<"Op.1 (todo)";
    cout<<"\nOp.2 (sólo función A)";
    cout<<"\nOp.3 (sólo función B)";
    cout<<"\nOp.4 (sólo función C)";
    cout<<"\nOp.5 (sólo función D)";
    cout<<"\nOp.6 (sólo función E)";
    cout<<"\nOp.7 (sólo función F)";
    cout<<"\nIngrese su opción por favor: ";
    cin>>op;

    switch (op)
    {
    case 1:
        funcion_A();
        cout<<endl;
        funcion_B();
        cout<<endl;
        funcion_C();
        cout<<endl;
        funcion_D();
        cout<<endl;
        funcion_E();
        cout<<endl;
        funcion_F();
        break;
    case 2:
        funcion_A();
        break;
    case 3:
        funcion_B();
        break;
    case 4:
        funcion_C();
        break;
    case 5:
        funcion_D();
        break;
    case 6:
        funcion_E();
        break;
    case 7:
        funcion_F();
        break;
    }
    return 0;
}
void funcion_A()
{
    double voltajes[100];
    cout<<"LOS VOLTAJES SON: ";
    for (int i = 0; i < 100; i++)
    {
        voltajes[i] = 20.0 + (rand() / (double)RAND_MAX) * (220.0 - 20.0);
        cout << voltajes[i] << "  ";
    }
}

void funcion_B()
{
    double temperaturas[50];
    cout<<"\nLAS TEMPERATURAS SON: ";
    for (int i = 0; i < 50; i++)
    {
        temperaturas[i] = (rand() / (double)RAND_MAX) * (100.0);
        cout << temperaturas[i] << "  ";
    }
}

void funcion_C()
{
    char alfanumericos[30];
    string caracteres="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    cout<<"\nLOS ALFANUMÉRICOS SON: ";
    for (int i = 0; i < 30; i++)
    {
        alfanumericos[i] = caracteres[rand()% caracteres.size()];
        cout << alfanumericos[i] << "  ";
    }
}

void funcion_D()
{
    int anios[100];
    cout<<"\nLOS ANIOS SON: ";
    for (int i = 0; i < 100; i++)
    {
        anios[i] = (rand()%(2025-1990+1))+1990;
        cout << anios[i] << "  ";
    }
}

void funcion_E()
{
    double velocidades[32];
    cout<<"\nLAS VELOCIDADES SON: ";
    for (int i = 0; i < 32; i++)
    {
        velocidades[i] = 10.0 + (rand() / (double)RAND_MAX) * (300.0 - 10.0);
        cout << velocidades[i] << "  ";
    }
}

void funcion_F()
{
    double distancias[1000];
    cout<<"\nLAS DISTANCIAS SON: ";
    for (int i = 0; i < 1000; i++)
    {
        distancias[i] = 1.0 + (rand() / (double)RAND_MAX) * (1000.0 - 1.0);
        cout << distancias[i] << "  ";
    }
}