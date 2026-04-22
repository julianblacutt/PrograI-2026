// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 22/04/2023

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void asignarAsientoEspecial(char sala[10][10],vector<string>&ListaEspera,int fila, int col, bool &exito);
int main()
{
    system("chcp 65001");
    system ("cls");
    srand(time(0));

    char sala[10][10];
    int fila=0;
    int col=0;
    bool exito=false;
    vector<string>ListaEspera={"José","Canela","Daniela","Amanda","Fernando","Nathaly","Julian"};

    cout<<"Bienvenido a UCB Theater."<<endl;
    cout<<"Esta es la distribución de asientos: "<<endl;
    cout<<"\nLos asientos con la letra 'D' se encuentran disponibles."<<endl;
    cout<<"Los asientos con la letra 'R' se encuentran reservados."<<endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            sala[i][j]='D';
        } 
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<sala[i][j]<<"\t";
        }
        cout<<endl;
    }
    asignarAsientoEspecial(sala,ListaEspera,fila,col,exito);
    return 0;
}
void asignarAsientoEspecial(char sala[10][10],vector<string>&ListaEspera,int fila, int col, bool &exito)
{
    while (!ListaEspera.empty())
    {
        exito=false; 
        cout<<"Estimad@ "<<ListaEspera[0]<<" ingrese los datos."<<endl;
        while (exito==false)
        {
            cout<<"Ingrese la fila: ";
            cin>>fila;
            cout<<"Ingrese la columna: ";
            cin>>col;
            if (sala[fila][col]=='D')
            {
                sala[fila][col]='R';
                cout<<"Su aciento ha sido asignado correctamente."<<endl;
                ListaEspera.erase(ListaEspera.begin());
                exito=true;
            }
            else
            {
                cout<<"Ese asiento ya se encuentra reservado."<<endl;
            }
        }
        for (int i = 0; i < 10; i++)
           {
                for (int j = 0; j < 10; j++)
                {
                    cout<<sala[i][j]<<"\t";
                }
            cout<<endl;
            } 
    }
    cout<<"No quedan más personas en la lista de espera."; 
}