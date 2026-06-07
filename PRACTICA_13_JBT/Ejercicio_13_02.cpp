// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 06/06/2026
#include <iostream>

using namespace std;

//Estructuras
struct DatosAtleta
{
    char nombre[20];
    char pais[20];
    int edad;
    int mejor_tiempo;
}atletas[20];

//Prototipado funciones
void Ingresardatos(DatosAtleta atletas[], int n);
int Buscarmejortiempo(DatosAtleta atletas[],int n);

int main()
{
    system("chcp 65001");
    system("cls");

    int n=0;
    cout<<"DATOS DE ATLETAS"<<endl;
    cout<<"Cuántos atletas desea registrar: ";
    cin>>n;
    cin.ignore();

    Ingresardatos(atletas, n);
    int elmejor=Buscarmejortiempo(atletas,n);
    cout<<"\nMEJOR ATLETA"<<endl;
    cout<<"Nombre: "<<atletas[elmejor].nombre<<endl;
    cout<<"País: "<<atletas[elmejor].pais<<endl;
    return 0;
}
void Ingresardatos(DatosAtleta atletas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nIngrese el nombre: ";
        cin.getline(atletas[i].nombre,20);
        cout<<"Ingrese el país: ";
        cin.getline(atletas[i].pais,20);
        cout<<"Ingrese la edad: ";
        cin>>atletas[i].edad;
        cout<<"Ingrese su tiempo (seg): ";
        cin>>atletas[i].mejor_tiempo;
        cin.ignore();
    }  
}
int Buscarmejortiempo(DatosAtleta atletas[],int n)
{
    int Mejor=0;
    for (int i = 0; i < n; i++)
    {
        if (atletas[i].mejor_tiempo<atletas[Mejor].mejor_tiempo)
        {
            Mejor=i;
        } 
    }
    return Mejor;
}