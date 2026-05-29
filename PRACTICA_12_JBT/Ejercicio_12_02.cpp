// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int ContarPalabras(string NombreArchivo);
int main()
{
    system("chcp 65001");
    system("cls");
    
    cout<<"La cantidad de palabras es: "<<ContarPalabras("texto_02.txt");

    return 0;
}
int ContarPalabras(string NombreArchivo)
{
    //LEER ARCHIVO
    int contadoresp=0;

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
    while (!archivoLectura.eof())
    {
        getline(archivoLectura,lineatexto);
        for (int i = 0; i < lineatexto.size(); i++)
        {
            if (lineatexto[i]==' ')
            {
                contadoresp++;
            }
            
        }
        contadoresp++;
    }
    //3. Cerrar archivo
    archivoLectura.close();
    return contadoresp;
}