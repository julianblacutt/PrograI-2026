// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 09/03/2026

#include <iostream>

using namespace std;


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorios(int Liminferior, int Limsuperior);
int Simulaciondeventas(int nVendedoras);

int main ()
{
    int nVendedoras=0;
    system("cls");
    srand (time(0));

    cout<<"Ingrese la cantidad de vendedoras: ";
    cin>>nVendedoras;
    cout<<Simulaciondeventas(nVendedoras);
    return 0;
}
int GenerarAleatorios(int Liminferior, int Limsuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( Limsuperior - Liminferior + 1) ) + Liminferior;
    return aleatorio;
}
int Simulaciondeventas(int nVendedoras)
{
    float sueldoBasico=3300;
    float antiguedad=0;
    float PrecioProducto=0;
    float sumaventaprod=0;
    float comision=0;
    float totalGanado=0;
    for (int i = 1; i <= nVendedoras; i++)
    {
        //totalGanado=0;    (no es necesario volver a inicializar, porque no es acumulativo)
        sumaventaprod=0;//es acumulativo, por eso neceita inicializar todas las veces solicitadas
        for (int j = 1; j <= 10; j++)
        {
        sumaventaprod+=GenerarAleatorios(50,100); 
        }
        comision=sumaventaprod*0.1;
        antiguedad=GenerarAleatorios(0,1000);
        totalGanado=sueldoBasico+antiguedad+sumaventaprod+comision;
        cout <<"\nLa vendedora "<<i<<" gano por Total Ganado: "<<totalGanado<<endl;
        cout <<"La vendedora "<<i<<" gano por comision: "<<comision<<endl;
    }
    
    return 0;
}