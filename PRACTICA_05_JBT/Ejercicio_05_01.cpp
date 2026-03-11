// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 09/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generaraleatorios(int Liminferior, int Limsuperior);

int main ()
{
    system("cls");
    srand (time(0));

    int nProductos=0;
    float precio=0.0;
    float Iva=0.0;
    float precioTotal=0.0;
    float sumaIva=0.0;
    
    cout<<"Ingrese el numero n de productos por vender: ";
    cin>>nProductos;

    for (int i = 1; i <= nProductos; i++)
        {
        precio=generaraleatorios(20,50);
        Iva=precio*0.13;
        precioTotal+=precio;
        sumaIva+=Iva;
        }
    if (precioTotal>=2500)
        {
        cout <<"El total de ventas es: "<<precioTotal<<endl;
        cout <<"El descuento es: "<<precioTotal*0.05<<endl;
        cout <<"El precio de venta con descuento es: "<<precioTotal*0.95<<endl;
        cout <<"El IVA es: "<<sumaIva;
        }
    else
        {
        cout <<"El total de ventas es: "<<precioTotal<<endl;
        cout <<"El IVA es: "<<sumaIva;
        }
    return 0;
}

int generaraleatorios(int Liminferior, int Limsuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( Limsuperior - Liminferior + 1) ) + Liminferior;
    return aleatorio;
}