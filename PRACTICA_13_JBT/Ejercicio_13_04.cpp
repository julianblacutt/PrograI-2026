// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

//Estructuras
struct DatosEmpleado
{
    char nombre[20];
    char genero[20];
    float salario; 
}empleado[100];

//Prototipado de funciones
void ingresarDatos(DatosEmpleado empleado[],int n);
int buscarMayorSalario(DatosEmpleado empleado[], int n);
int buscarMenorSalario(DatosEmpleado empleado[], int n);

int main()
{
    system("chcp 65001");
    system("cls");

    int n=0;
    cout<<"PERSONAL DE LA UCB"<<endl;
    cout<<"Cuántos empleados registará: ";
    cin>>n;
    cin.ignore();
    ingresarDatos(empleado, n);
    int mayor=buscarMayorSalario(empleado, n);
    int menor=buscarMenorSalario(empleado, n);

    system("cls");
    cout<<"\nEMPLEADO CON MAYOR SALARIO"<<endl;
    cout<<"Nombre: "<<empleado[mayor].nombre<<endl;
    cout<<"Género: "<<empleado[mayor].genero<<endl;
    cout<<"Salario: "<<empleado[mayor].salario<<endl;
    cout<<"\nEMPLEADO CON MENOR SALARIO"<<endl;
    cout<<"Nombre: "<<empleado[menor].nombre<<endl;
    cout<<"Género: "<<empleado[menor].genero<<endl;
    cout<<"Salario: "<<empleado[menor].salario<<endl;
    return 0;
}
void ingresarDatos(DatosEmpleado empleado[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nIngrese el nombre: ";
        cin.getline(empleado[i].nombre,20);
        cout<<"Ingrese el género: ";
        cin.getline(empleado[i].genero,20);
        cout<<"Ingrese el salario: ";
        cin>>empleado[i].salario;
        cin.ignore();
    }
}
int buscarMayorSalario(DatosEmpleado empleado[], int n)
{
    int posMayor = 0;
    for (int i = 0; i < n; i++)
    {
        if (empleado[i].salario > empleado[posMayor].salario)
        {
            posMayor = i;
        }
    }
    return posMayor;
}
int buscarMenorSalario(DatosEmpleado empleado[], int n)
{
    int posMenor = 0;
    for (int i = 0; i < n; i++)
    {
        if (empleado[i].salario < empleado[posMenor].salario)
        {
            posMenor = i;
        }
    }
    return posMenor;
}