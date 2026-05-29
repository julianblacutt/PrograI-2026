// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 29/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void lecturaContador(string NombreArchivo);
int main()
{
    system("chcp 65001");
    system("cls");
    lecturaContador("documento_08.txt");
    return 0;
}
void lecturaContador(string NombreArchivo)
{
    //LEER ARCHIVO
    int contadorlineas=0;
    int contadorpalabras=0;
    int contadorcaracteres=0;

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
    string palabra;
    while (getline(archivoLectura,lineatexto))
    {
        contadorlineas++;
        contadorcaracteres+=lineatexto.size();
        contadorcaracteres++;
        for (int i = 0; i < lineatexto.size(); i++)
        {
            if (lineatexto[i]==' ')
            {
                contadorpalabras++;
            }
        }
        if (lineatexto.size()>0)
        {
            contadorpalabras++;
        }
        
    }
    //3. Cerrar archivo
    archivoLectura.close();

    cout<<"La cantidad de líneas es: "<<contadorlineas<<endl;
    cout<<"La cantidad de palabras es: "<<contadorpalabras<<endl;
    cout<<"La cantidad de caracteres es: "<<contadorcaracteres<<endl;
}