// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

//Estructuras
struct DatosAlumnos
{
    int cedula;
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[30];
    int telefono;
}alumno[50];

//Prototipado de funciones
void ingresarDatos(DatosAlumnos alumno[],int n);
void imprimirDatos(DatosAlumnos alumno[],int n);

int main()
{
    system("chcp 65001");
    system("cls");

    int n=0;
    cout<<"ESTUDIANTES PROGRA I"<<endl;
    cout<<"Cuantos estudiantes desea registar: ";
    cin>>n;
    cin.ignore();
    ingresarDatos(alumno, n);
    imprimirDatos(alumno, n);
    return 0;
}
void ingresarDatos(DatosAlumnos alumno[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nIngrese la cedula: ";
        cin>>alumno[i].cedula;
        cin.ignore();
        cout<<"Ingrese el nombre: ";
        cin.getline(alumno[i].nombre,30);
        cout<<"Ingrese el apellido: ";
        cin.getline(alumno[i].apellido,30);
        cout<<"Ingrese la edad: ";
        cin>>alumno[i].edad;
        cin.ignore();
        cout<<"Ingrese la profesión: ";
        cin.getline(alumno[i].profesion,30);
        cout<<"Ingrese el lugar de nacimiento: ";
        cin.getline(alumno[i].lugar_nacimiento,30);
        cout<<"Ingrese la dirección: ";
        cin.getline(alumno[i].direccion,30);
        cout<<"Ingrese el teléfono: ";
        cin>>alumno[i].telefono;
        cin.ignore();
    }
}
void imprimirDatos(DatosAlumnos alumno[],int n)
{
    system("cls");
    cout<<"ESTUDIANTES REGISTRADOS EN PROGRA I"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nCedula: "<<alumno[i].cedula<<endl;
        cout<<"Nombre: "<<alumno[i].nombre<<endl;
        cout<<"Apellido: "<<alumno[i].apellido<<endl;
        cout<<"Edad: "<<alumno[i].edad<<endl;
        cout<<"Profesión: "<<alumno[i].profesion<<endl;
        cout<<"Lugar de Nacimiento: "<<alumno[i].lugar_nacimiento<<endl;
        cout<<"Dirección: "<<alumno[i].direccion<<endl;
        cout<<"Teléfono: "<<alumno[i].telefono<<endl;
    }    
}