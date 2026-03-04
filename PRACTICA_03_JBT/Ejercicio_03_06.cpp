// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Fecha creación: 04/03/2026 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
system("cls");
int N=0;
int edad=0;
int edad1=0;
int edad2=0;
int edad3=0;
int pañales=0;

cout<<"Ingrese la cantidad n de ninios: "; //en todo lo que involucra palabras con ñ, usé una i para "igualar" el sonido
cin >>N;                                   //de otra forma el codigo no puede reconocer la ñ (por ahora)
while (N<=0)
if (N<=0)
{
cout<<"El valor menor o igual a 0 no es valido"<<endl;
cout<<"Ingrese n nuevamente: ";
cin >>N;
}
for (int i = 0; i < N; i++)
{
edad=rand()%3+1;
if (edad==1)
{
edad1++;
}
if (edad==2)
{
edad2++;
}
if (edad==3)
{
edad3++;
}
}
pañales=(edad1*6)+(edad2*3)+(edad3*2);

cout<<"Los datos aleatorios generados fueron: "<<endl;
cout<<"Ninios de 1 anio en total: "<<edad1<<endl;
cout<<"Ninios de 2 anios en total: "<<edad2<<endl;
cout<<"Ninios de 3 anios en total: "<<edad3<<endl;
cout<<"Consumo de paniales: "<<pañales<<endl;

return 0;
}
