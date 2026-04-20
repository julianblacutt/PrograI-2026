// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    system ("chcp 65001");
    system ("cls");

    string correo;
    int contararroba=0;
    bool contarpunto=false;
    int posicionarroba=0;

    cout<<"Ingrese su dirección de correo por favor: ";
    getline(cin,correo);

    for (int i = 0; i < correo.size(); i++)
    {
        if (correo[i]=='@')
        {
            contararroba++;
            posicionarroba=i;
        }
    }
    if (contararroba==1)
    {
        for (int i = posicionarroba+1; i < correo.size(); i++)
        {
            if (correo[i]=='.')
            {
                contarpunto=true;
            }
        }
        
    }
    if ((contararroba==1)&&(contarpunto))
    {
        cout<<"El correo ingresado: "<<correo<<" es válido.";
    }
    else
    {
        cout<<"El correo ingresado: "<<correo<<" en inválido";
    }
    
    return 0;
}