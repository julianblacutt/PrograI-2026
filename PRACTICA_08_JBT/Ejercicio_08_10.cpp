// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ConvertirMayus(string entrada);
int main()
{
    system ("chcp 65001");
    system ("cls");

    string entrada;
    cout<<"Ingrese su string: ";
    getline(cin,entrada);

    string salida=ConvertirMayus(entrada);
    
    cout<<"\nEl string ingresado fue: "<<entrada<<endl;
    cout<<"El string de salida es: "<<salida;

    return 0;
}
string ConvertirMayus(string entrada)
{
    bool nuevoString = true;

    for (int i = 0; i < entrada.size(); i++) 
    {
        if (entrada[i] == ' ') //cada que haya un espacio, se cuenta una nueva palabra
        {
            nuevoString = true;
        } 
        // Si es un carácter y venimos de un espacio (o es el inicio del string)
        else if (nuevoString) 
        {
            if (entrada[i] >= 'a' && entrada[i] <= 'z') //verificacion por ACII si es minuscula
            {
                entrada[i]=entrada[i]-32; //procesamos el inicio de la palabra
            }
            nuevoString = false; //string cambiado
        }
    }
    return entrada;
}

//caso similar al del ejercicio 9, puedo captar por dónde va la cosa, pero no sabría aplicar esta lógica.