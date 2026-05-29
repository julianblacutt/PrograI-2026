// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 28/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void FiltrarTemperaturas(string NombreArchivo, float temperaturafilt);
int main()
{
    system("chcp 65001");
    system("cls");

    float temperaturafilt=0.0;
    cout<<"Ingrese la temperatura filtradora: ";
    cin>>temperaturafilt;
    FiltrarTemperaturas("temperaturas_06.txt", temperaturafilt);

    return 0;
}
void FiltrarTemperaturas(string NombreArchivo, float temperaturafilt)
{
    string ciudad;
    float temperatura;

    ifstream archivoLectura(NombreArchivo);
    ofstream archivoEscritura("altas_temperaturas_06.txt");

    if (!archivoLectura||!archivoEscritura)
    {
        cout<<"Error al abrir los archivos.";
        return;
    }
    while (archivoLectura>>ciudad>>temperatura)
    {
        if (temperatura>temperaturafilt)
        {
            archivoEscritura<<ciudad<<" "<<temperatura<<endl;
        }
    }
    archivoLectura.close();
    archivoEscritura.close();

    cout<<"El archivo se ha generado de forma correcta.";
}