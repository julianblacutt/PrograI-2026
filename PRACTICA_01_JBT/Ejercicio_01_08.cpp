// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{
    //Dato
    int primerNum=0;
    int segundoNum=0;
    int tercerNum=0;
    int cuartoNum=0; 

    system("cls");
    cout <<"Ingrese una el primer numero: ";
    cin >> primerNum;
    cout <<"Ingrese una el segundo numero: ";
    cin >> segundoNum;
    cout <<"Ingrese una el tercer numero: ";
    cin >> tercerNum;
    cout <<"Ingrese una el cuarto numero: ";
    cin >> cuartoNum;

    //Salida
    if (cuartoNum==primerNum||cuartoNum==segundoNum||cuartoNum==tercerNum)
    {
        cout <<"El cuarto numero ingresado "<< cuartoNum << " COINCIDE con uno de los anteriores ingresados";
    }
    else
    {
        cout <<"El cuarto numero ingresado "<< cuartoNum << " NO COINCIDE con ninguno de los anteriores ingresados";
    }
    return 0;
}