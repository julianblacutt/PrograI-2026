// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026

#include <iostream>

using namespace std;

int contarDigitos(int num, int digitos);
int main ()
{
    system("cls");
    int num=0;
    int digitos=0;

    cout<<"Ingrese un numero entero positivo: ";
    cin>>num;
    while (num<0)
    {
        if (num<0)
        {
        cout<<"El numero debe ser un entero positivo."<<endl;
        cout<<"Ingrese el numero nuevamente: ";
        cin>>num;
        }
    }
    cout<<"El numero de digitos de su num es: "<<contarDigitos(num,digitos);
    return 0;
}
int contarDigitos(int num, int digitos)
{
    while(num>0)
    {
        num=num/10;
        digitos++;
    }
    return digitos;
}