// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Fecha creación: 03/03/2026 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
system("cls");
int N=0;
int numAleatorios=0;
float sumatoria=0;//lo dejé como dato flotante para que el promedio saliera correctamente con algunos decimales
float promedio=0;
int valorMayor=0;//todo numero es mayor a cero, y conforme se generen los numeros, se guardará el mayor de todos, es como un "if" automatico
int valorMenor=1000;//todo numero puede ser menor a mil y nuevamente conforme se comparen los numeros, se quedará el menor.

srand(time(0));

cout <<"Ingrese una cantidad n de numeros: ";
cin >>N;

while (N<=0)
{
if (N<=0)
{
cout<<"Los n numeros no pueden ser menores o iguales a 0"<<endl;
cout<<"Ingrese nuevamente n: ";
cin >>N;
}
}

cout<<"Los numeros aleatorios fueron: ";
for (int i = 0; i < N; i++)
{
numAleatorios=rand()%1000+1;
cout<<numAleatorios<<" ";
sumatoria += numAleatorios;
promedio=sumatoria/N;
if (numAleatorios<valorMenor)
{
valorMenor=numAleatorios;
}
if (numAleatorios>valorMayor)
{
valorMayor=numAleatorios;
}
}

cout<<" "<<endl;
cout<<"\nLa sumatoria de los numeros da como resulatado: "<<sumatoria<<endl;
cout<<"El promedio obtenido es: "<<promedio<<endl;
cout<<"El mayor valor generado es: "<<valorMayor<<endl;
cout<<"El menor valor generado es: "<<valorMenor<<endl;

return 0;
}