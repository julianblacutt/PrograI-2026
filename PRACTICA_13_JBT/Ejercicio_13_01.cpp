// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

//Estructuras
struct DatosLibro
{
    char titulo[20];
    char autor[20];
    int año_publicacion;
    bool disponible;
}Libro;

//Prototipado funciones
void Registrolibro(DatosLibro &Libro);
void Mostarlibro(DatosLibro Libro);

int main()
{
    system("chcp 65001");
    system("cls");

    cout<<"REGISTRO DE UNA BIBLIOTECA"<<endl;
    Registrolibro(Libro);
    Mostarlibro(Libro);
    return 0;
}
void Registrolibro(DatosLibro &Libro)
{
    char opcion;
    cout<<"Ingrese el título del libro: ";
    cin.getline(Libro.titulo,20);
    cout<<"Ingrese el autor: ";
    cin.getline(Libro.autor,20);
    cout<<"Ingrese el año de publicación: ";
    cin>>Libro.año_publicacion;
    cout<<"El libro está disponible? (S/N): ";
    cin>>opcion;
    if (opcion=='s'||opcion=='S')
    {
        Libro.disponible=true;
    }
    else
    {
        Libro.disponible=false;
    }
}
void Mostarlibro(DatosLibro Libro)
{
    system("cls");
    cout<<"DATOS DEL LIBRO"<<endl;
    cout<<"Título: "<<Libro.titulo<<endl;
    cout<<"Autor: "<<Libro.autor<<endl;
    cout<<"Año de publicación: "<<Libro.año_publicacion<<endl;
    cout<<"Disponible: "<<Libro.disponible<<endl;
}