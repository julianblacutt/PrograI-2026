// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{
    //Dato
    int num=0;
    string miles[]={"","M","MM","MMM"};
    string centenas[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string decenas[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string unidades[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

    system("cls");
    cout <<"Ingrese un numero entero [1-3999]: ";
    cin >> num;

    //Salida
    if (num>=1 && num<=3999)
    {
        cout <<"Su numero ingresado en romanos es: "
             << miles[num/1000]
             << centenas[(num%1000)/100]
             << decenas[(num%100)/10]
             << unidades[num%10]
             << endl;
    }
    else
    {
        cout <<"El numero ingresado esta fuera del rango"<<endl;
    }
    return 0;
}