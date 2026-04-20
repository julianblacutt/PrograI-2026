// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

string nombreCom(vector <string> Nombres,  vector <string> Apellidos);
int main()
{
    system ("chcp 65001");
    system ("cls");
    srand(time(0));

    vector <string> Nombres={"Julian", "José", "Canela", "Daniela", "Fernando", "Amanda", "Nathaly", "Jesús", "Hércules", "Hestia"};
    vector <string> Apellidos={"Blacutt", "Troche", "Sánchez", "García", "Camacho", "Clavijo","Velarde","Balderrama", "Arias", "Vargas"};
    vector <int> Edad={17,18,19,20,22,40,50,57,53,60};

    int N=0;

    cout<<"Cuántos datos desea generar: ";
    cin>>N;
    cout<<"Los datos obtenidos son: "<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"Nombre: "<<nombreCom(Nombres,Apellidos)<<" Edad: "<<Edad[rand()%Edad.size()]<<endl;
    }
    return 0;
}
int GenerarAleatorios(int liminf, int limsup)
{
    int aleatorio=0;
    aleatorio=(rand()%(limsup-liminf+1)+liminf);
    return aleatorio;
}
string nombreCom(vector <string> Nombres,  vector <string> Apellidos)
{
    string datofinal= Nombres[rand()%Nombres.size()] + " "+ Apellidos[rand()%Apellidos.size()];
    return datofinal;
}