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
int esPar=0;
double carasPares=0;
int dado=0;
double repeticion=0;
    
srand(time(0));

cout << "Se simulara el lanzamiento de un dado de seis caras"<<endl;
cout << "Ingrese el numero de veces que desea lanzar el dado: ";
cin >> n;

while (n<=0)
{
if (n<=0)
{
cout<<"Los lanzamientos no pueden ser menores o iguales a 0"<<endl;
cout<<"Ingrese nuevamente n: ";
cin >>n;
}
}

for (int i = 0; i < n; i++)
{
dado=rand()%6+1;
if (dado%2==0)
{
esPar++;
carasPares=esPar;
}
}
repeticion=carasPares/n;
cout << "La cantidad de veces que salio cara par es: "<<carasPares<<endl;
cout << "La frecuencia de repeticion de caras pares en "<<n<<" lanzamientos es: "<<repeticion;
   
return 0;
}