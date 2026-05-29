// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int ContarPalabras(string NombreArchivo, string buscopal);
int main()
{
    system("chcp 65001");
    system("cls");

    string buscopal;
    cout<<"Que palabra o frase desea encontrar: ";
    getline(cin,buscopal);
    cout<<"La palabra o frase que buscaba aparece un total de: "<<ContarPalabras("datos_04.txt",buscopal);
    return 0;
}
int ContarPalabras(string NombreArchivo, string buscopal)
{
    //LEER ARCHIVO
    int contadorpal=0;

    //1. Abrir archivo
    ifstream archivoLectura;
    archivoLectura.open(NombreArchivo);
    if (archivoLectura.fail())
    {
        cout<<"No se pudo abrir el archvo para leer.";
        return;
    }
    
    //2. Procesar archivo
    string lineatexto;
    while (getline(archivoLectura,lineatexto))
    {
        size_t posicion=lineatexto.find(buscopal); //se busca con exactitud nuestra palabra o frase
        while (posicion != string::npos) //esto es para contabilizar la misma frase o palabra si es que aparece mas de una vez en la misma linea
        {
            contadorpal++;
            posicion=lineatexto.find(buscopal,posicion+buscopal.size()); //se avanza por posiciones
        }  
    }
    //3. Cerrar archivo
    archivoLectura.close();
    return contadorpal;
}