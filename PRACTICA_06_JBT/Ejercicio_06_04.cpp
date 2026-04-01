// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

void CalcularPrecioTotal(float &total, float &impuesto, float precio);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int op=0;
    float precio=0.0;
    float total=0.0;
    float impuesto=0.13;

    cout<<"Se calculará el total a pagar."<<endl;
    cout<<"Tiene otro porcentaje de impuesto? 1=si 2=no: ";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<"Ingrese el precio: ";
        cin>>precio;
        cout<<"Ingrese su impuesto: ";
        cin>>impuesto;
        CalcularPrecioTotal(total, impuesto, precio);
        break;
    case 2:
        cout<<"Ingrese el precio: ";
        cin>>precio;
        CalcularPrecioTotal(total, impuesto, precio);
        break;
    }
    return 0;
}
void CalcularPrecioTotal(float &total, float &impuesto, float precio)
{
    total=precio+(precio*impuesto);
    cout<<"El total a pagar es: "<<total;
} 