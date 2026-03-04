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
int numAleatorio=0;
int factorial=1;//si inicializara esta variable en cero, siempre tendria un factorial=0
    
srand(time(0));

numAleatorio=rand()%10+1;
for (int i = 1; i<= numAleatorio; i++)
{
    factorial*=i;
}

cout<<"El nuemro aleatorio generado por el programa es: "<<numAleatorio<<endl;
cout<<"El factorial correspondiente del numero "<<numAleatorio<<" es: "<<factorial;

return 0;
}