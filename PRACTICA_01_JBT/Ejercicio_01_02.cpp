// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{

    //Datos
    float precioInicial=0; //Precio inical de cualquier producto
    float IVA=0.13; //Es el 13%
    float precioFinal=0;

    system("cls");
    cout <<"Ingrese el precio de su producto: " << endl;
    cin >> precioInicial;

    //Operacion matematica
    precioFinal=precioInicial+(precioInicial*IVA);

    cout <<"El precio final de su producto es: " << precioFinal << endl;
return 0;
}