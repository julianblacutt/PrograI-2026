// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ActualizarPrecio(string NombreArchivo);
int main()
{
    system("chcp 65001");
    system("cls");
    ActualizarPrecio("productos_05.txt");
    return 0;
}
void ActualizarPrecio(string NombreArchivo)
{
    string buscarProd;
    string Producto;
    float nuevoPrecio=0.0;
    float precio=0.0;
    bool Prodencontrado=false;

    cout<<"Ingrese el nombre del producto: ";
    getline(cin,buscarProd);

    cout<<"Ingrese el nuevo precio: ";
    cin>>nuevoPrecio;

    ifstream archivoLectura(NombreArchivo);
    ofstream archivoTemporal("temp_05.txt");

    if (!archivoLectura || !archivoTemporal)
    {
        cout<<"Error al abrir los archivos.";
        return;
    }

    while (archivoLectura>>Producto>>precio)
    {
        if (Producto == buscarProd)
        {
            precio=nuevoPrecio;
            Prodencontrado=true;
        }
        archivoTemporal<<Producto<<" "<<precio<<endl;
    }
    archivoLectura.close();
    archivoTemporal.close();

    remove(NombreArchivo.c_str());
    rename("temp_05.txt",NombreArchivo.c_str());

    if (Prodencontrado)
    {
        cout<<"El precio del producto ha sido actualizado.";
    }
    else
    {
        cout<<"El producto no existe en el archivo.";
    }
}