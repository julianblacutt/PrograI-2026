// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 29/05/2026
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char cifrarCaracteres(char c, int desplazamiento);
void cifradoCesar(string entrada, string salida);
int main()
{
    system("chcp 65001");
    system("cls");
    cifradoCesar("mensaje_09.txt", "mensaje_cifrado_09.txt");
    return 0;
}
char cifrarCaracteres(char c, int desplazamiento)
{
    if (c>='A' && c<='Z')
    {
        return char((c-'A'+desplazamiento)%26+'A');
    }
    if (c>='a' && c<='z')
    {
        return char((c-'a'+desplazamiento)%26+'a');
    }
    return c;
}
void cifradoCesar(string entrada, string salida)
{
    ifstream archivoEntrada(entrada);
    ofstream archivoSalida(salida);

    if (!archivoEntrada || !archivoSalida)
    {
        cout << "Error al abrir archivos.";
        return;
    }
    string lineaTexto;
    while (getline(archivoEntrada,lineaTexto))
    {
        for (int i = 0; i < lineaTexto.size(); i++)
        {
            archivoSalida<<cifrarCaracteres(lineaTexto[i],3);
        }
        archivoSalida<<endl;
    }
    archivoEntrada.close();
    archivoSalida.close();
     cout << "Archivo cifrado correctamente." << endl;
}