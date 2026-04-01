// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 01/04/2026

#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);
int main()
{
    system ("chcp 65001");
    system ("cls");

    int N=0;
    double sumaTotal=0.0;
    int cantidadNotas=0;
    double nuevaNota=0.0;

    cout<<"Cuantas notas desea ingresar: ";
    cin>>N;

    for (int i = 1; i <= N; i++)
    {
        cout<<"Ingrese la nota "<<i<<": ";
        cin>>nuevaNota;
        while (nuevaNota<0)
        {
            if (nuevaNota<0)
            {
                cout<<"No puede haber notas negativas."<<endl;
                cout<<"Ingrese la nota "<<i<<" otra vez: ";
                cin>>nuevaNota;
            }
            
        }
        
        agregarNota(sumaTotal, cantidadNotas, nuevaNota);
    }
    
    cout<<"\nLa suma total es de: "<<sumaTotal<<endl;
    cout<<"La cantidad de notas es: "<<cantidadNotas;
    return 0;
}
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal+=nuevaNota;
    cantidadNotas+=1;
}