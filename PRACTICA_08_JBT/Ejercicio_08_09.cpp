// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 19/04/2023

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool esPalindromo(string texto);
int main()
{
    system ("chcp 65001");
    system ("cls");

    string texto;
    string palindromo;
    bool Espalindromo=false;

    cout<<"Ingrese su palíndromo: ";
    getline(cin,texto);
    
    if (esPalindromo(texto)) 
    {
        cout << "\nEs un palíndromo." << endl;
    } 
    else 
    {
        cout << "\nNo es un palíndromo." << endl;
    }
    return 0;
}
bool esPalindromo(string texto) 
{
    string textoLimpio = "";

    for (int i = 0; i < texto.size(); i++) 
    {
        char c = texto[i];

        if (c >= 'A' && c <= 'Z') //conversion del codigo ASCII
        {
            c = c + 32;
        }

        // 2. Normalizar tildes (conversión directa)
        if (c == (char)-31 || c == (char)-63)
        {
            c = 'a';
        }
        if (c == (char)-23 || c == (char)-55)
        {
            c = 'e';
        }
        if (c == (char)-19 || c == (char)-51) 
        {
            c = 'i';
        }
        if (c == (char)-13 || c == (char)-45) 
        {
            c = 'o';
        }
        if (c == (char)-6  || c == (char)-38) 
        {
            c = 'u';
        }

        // 3. Filtro final: solo si es alfanumérico se agrega
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) 
        {
            textoLimpio += c;
        }
    }

    // Verificación (Sin cambios aquí)
    bool esIgual = true;
    int inicio = 0;
    int fin = textoLimpio.size() - 1;

    while (inicio < fin && esIgual) 
    {
        if (textoLimpio[inicio] != textoLimpio[fin]) 
        {
            esIgual = false;
        }
        inicio++;
        fin--;
    }

    return esIgual && textoLimpio.size() > 0;
}

//necesité ayuda, más o menos entiendo por dónde va la lógica pero no me queda claro cómo aplicarla.