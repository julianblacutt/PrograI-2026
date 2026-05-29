// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivo(string NombreArchivo);
void LeerArchivo(string NombreArchivo);
int main()
{
    system("chcp 65001");
    system("cls");
    EscribirArchivo("estudiantes_03.txt");
    system("cls");
    LeerArchivo("estudiantes_03.txt");
    return 0;
}
void EscribirArchivo(string NombreArchivo)
{
    //ESCRIBIR UN ARCHIVO
    //1. Abrir archivo
    ofstream archivoEscritura;
    archivoEscritura.open(NombreArchivo);
    if (archivoEscritura.fail())
    {
        cout<<"No se pudo abrir el archivo para escribir.";
    }

    //2. Procesar archivo
    string nombre;
    int edad=0;
    float promedio=0.0;

    int n=0;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre: ";
        getline(cin,nombre);
        archivoEscritura<<"Nombre: "<<nombre<<endl;
        cout<<"Ingrese la edad: ";
        cin>>edad;
        archivoEscritura<<"Edad: "<<edad<<endl;
        cout<<"Ingrese el promedio: ";
        cin>>promedio;
        archivoEscritura<<"Promedio: "<<promedio<<endl;

        archivoEscritura<<endl;
        cin.ignore();
    }
    //3. Cerrar archivo
    archivoEscritura.close();
}
void LeerArchivo(string NombreArchivo)
{
    //LEER ARCHIVO
    //1. Abrir archivo
    ifstream archivoLectura;
    archivoLectura.open(NombreArchivo);
    if (archivoLectura.fail())
    {
        cout<<"No se pudo abrir el archivo para leer.";
        return;
    }
    
    //2. Procesar archivo
    string lineatexto;
    while (getline(archivoLectura,lineatexto))
    {
        cout<<lineatexto<<endl;
    }
    //3. Cerrar archivo
    archivoLectura.close();
}