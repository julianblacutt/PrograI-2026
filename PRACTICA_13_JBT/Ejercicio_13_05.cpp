// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

//Estructura
struct DatosPelicula
{
    char titulo[20];
    char director[20];
    int duracion;
    int año_estreno;
    char genero[20];
}pelicula[50];

//Prototipado de las funciones
void ingresarDatos(DatosPelicula pelicula[],int n);
bool sonIguales(char cadena1[], char cadena2[]);
void mostrarPorGenero(DatosPelicula pelicula[], int n);
void mostrarPorDirector(DatosPelicula pelicula[], int n);

int main()
{
    system("chcp 65001");
    system("cls");

    int n=0;
    cout<<"SISTEMA DE GESTIÓN DE PELÍCULAS"<<endl;
    cout<<"Cantidad de películas a ingresar: ";
    cin>>n;
    cin.ignore();
    ingresarDatos(pelicula,n);
    cout<<"\nBÚSQUEDA POR GÉNERO"<<endl;
    mostrarPorGenero(pelicula, n);
    cout<<"\nBÚSQUEDA POR DIRECTOR"<<endl;
    mostrarPorDirector(pelicula, n);
    return 0;
}
void ingresarDatos(DatosPelicula pelicula[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nIngrese el título: ";
        cin.getline(pelicula[i].titulo,20);
        cout<<"Ingrese el director: ";
        cin.getline(pelicula[i].director,20);
        cout<<"Ingrese la duración: ";
        cin>>pelicula[i].duracion;
        cout<<"Ingrese el año de estreno: ";
        cin>>pelicula[i].año_estreno;
        cin.ignore();
        cout<<"Ingrese el género: ";
        cin.getline(pelicula[i].genero,20);
    }
}
bool sonIguales(char cadena1[], char cadena2[])
{
    int i = 0;
    while (cadena1[i] != '\0' || cadena2[i] != '\0')
    {
        if (cadena1[i] != cadena2[i])
        {
            return false;
        }
        i++;
    }
    return true;
}
void mostrarPorGenero(DatosPelicula pelicula[], int n)
{
    char generoBuscado[50];
    bool encontrado = false;

    cout << "Ingrese el genero a buscar: ";
    cin.getline(generoBuscado, 50);

    for (int i = 0; i < n; i++)
    {
        if (sonIguales(pelicula[i].genero, generoBuscado))
        {
            cout << "\nTítulo: " << pelicula[i].titulo;
            cout << "\nDirector: " << pelicula[i].director;
            cout << "\nDuración: " << pelicula[i].duracion << " min";
            cout << "\nAño: " << pelicula[i].año_estreno;
            cout << "\nGénero: " << pelicula[i].genero << endl;
            encontrado = true;
        }
    }
    if (!encontrado)
    {
        cout << "No se encontraron peliculas de ese genero.\n";
    }
}
void mostrarPorDirector(DatosPelicula pelicula[], int n)
{
    char directorBuscado[50];
    bool encontrado = false;

    cout << "Ingrese el director a buscar: ";
    cin.getline(directorBuscado, 50);

    for (int i = 0; i < n; i++)
    {
        if (sonIguales(pelicula[i].director, directorBuscado))
        {
            cout << "\nTítulo: " << pelicula[i].titulo;
            cout << "\nGénero: " << pelicula[i].genero;
            cout << "\nDuración: " << pelicula[i].duracion << " min";
            cout << "\nAño: " << pelicula[i].año_estreno << endl;
            encontrado = true;
        }
    }
    if (!encontrado)
    {
        cout << "No se encontraron peliculas de ese director.\n";
    }
}