// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 29/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

float calcularPromedio(float nota1, float nota2, float nota3, float nota4);
void ObtenerPromedio(string NombreArchivo);
int main()
{
    system("chcp 65001");
    system("cls");
    ObtenerPromedio("calificaciones_07.txt");

    return 0;
}
float calcularPromedio(float nota1, float nota2, float nota3, float nota4)
{
    return (nota1+nota2+nota3+nota4)/4;
}
void ObtenerPromedio(string NombreArchivo)
{
    string nombre;
    float nota1,nota2,nota3,nota4;
    float promedio=0.0;

    ifstream archivoLectura(NombreArchivo);
    ofstream archivoEscritura("promedios_07.txt");

    if (!archivoLectura||!archivoEscritura)
    {
        cout<<"Error al abrir los archivos.";
        return;
    }
    while (archivoLectura>>nombre>>nota1>>nota2>>nota3>>nota4)
    {
        promedio=calcularPromedio(nota1,nota2,nota3,nota4);
        archivoEscritura<<nombre<<" "<<promedio<<endl;
    }
    archivoLectura.close();
    archivoEscritura.close();

    cout<<"El archivo se ha generado de forma correcta.";
}