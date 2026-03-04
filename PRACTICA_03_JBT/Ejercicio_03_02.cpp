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
int n=0;
int moneda=0;
int esCruz=0;//Contador de Cruz
int esCara=0;//Contador de Cara
double ladoCruz=0;//auxiliar
double ladoCara=0;//auxiliar
double repeCruz=0;//frecuencia de Cruz
double repeCara=0;//frecuencia de Cara
    
srand(time(0));

cout << "Se simulara el lanzamiento de n veces de una moneda"<<endl;
cout << "Ingrese el numero de veces que desea lanzar la moneda: ";
cin >> n;

while (n<=0)
{
if (n<=0)
{
cout<<"Los lanzamientos de moneda no pueden ser menores o iguales a 0"<<endl;
cout<<"Ingrese nuevamente n: ";
cin >>n;
}
}

for (int i = 0; i < n; i++)
{
moneda=rand()%2;
if (moneda==0)
{
esCruz++;
ladoCruz=esCruz;
}
else
{
esCara++;
ladoCara=esCara;
}
}
repeCruz=ladoCruz/n;
repeCara=ladoCara/n;
cout << "La cantidad de veces que salio cruz es: "<<ladoCruz<<" y su frecuencia fue de: "<<repeCruz<<endl;
cout << "La cantidad de veces que salio cara es: "<<ladoCara<<" y su frecuencia fue de: "<<repeCara<<endl;
   
return 0;
}