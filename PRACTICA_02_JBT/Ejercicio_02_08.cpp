// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 24/02/2026 


#include <iostream>

using namespace std;

int main ()
{
    int nProductos=0;//numero de productos a ingresar
    float precio=0;//precio inicial de cada producto uno por uno
    float precioIva=0;//el IVA aplicado a cada producto al principio
    float descuento=0;//el descuento de 5% que se genere
    float precioTotal=0;//total de cobro al cliente
    float pagoIva=0;//total del pago del IVA al servicio de los impuestos
    
    system("cls");

    cout<<"Ingrese el numero n de productos vendidos: ";
    cin>>nProductos;
    
    for (int i = 1; i <= nProductos; i++)
    {
        cout<<"Ingresa el precio del producto "<<i<<": ";
        cin>>precio;

        precioIva += precio+(precio*0.13); //operacion extendida para aplicar el IVA al principio
    }
    if (precioIva>2500)
    {
        descuento=precioIva*0.05; //el descuento con condicion de superar el monto de 2500 BS.
    }
    precioTotal=precioIva-descuento;
    pagoIva=precioIva-(precioIva/1.13); //para esta parte se debe usar el precio normal de los productos (sin IVA) y restarlo al precio con IVA

    cout<<"\nEl resumen de ventas del dia de hoy de 'La Estrella' es el siguiente."<<endl;
    cout<<"\nEl pago total fue de: "<<precioTotal<<" Bs."<<endl;
    cout<<"El pago del IVA al servicio de los impuestos fue de: "<<pagoIva<<" Bs."<<endl;
    return 0;
}