// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Fecha creación: 03/03/2026 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
system("cls");
int N=0;
int numAleatorios=0;
bool numPrimo=true;
int contadorPrimos=0;

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
numAleatorios=rand()%10000+1;
cout<<numAleatorios<<" ";
if (numAleatorios>1)
{
numPrimo=true;
}
for (int j = 2; j <= sqrt(numAleatorios) ; j++)
{
if (numAleatorios%j==0)
{
numPrimo=false;
}

}
if (numPrimo)
{
contadorPrimos++;
}
}

cout<<" ";
cout<<"\nLa cantidad de numeros primos presentes es: "<<contadorPrimos;
return 0;
}
