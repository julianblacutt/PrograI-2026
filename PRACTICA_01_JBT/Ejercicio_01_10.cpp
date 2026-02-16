// Materia: Programación I, Paralelo 4 
// Autor: Julian Blacutt Troche 
// Carnet: 12420312 
// Carrera del estudiante: Ing. Mecatrónica 
// Fecha creación: 16/02/2026 

#include <iostream>

using namespace std;

int main ()
{
    int opcionMes;

    system("cls");
    cout <<"Ingrese una opcion entre 1-12: ";
    cin >> opcionMes;

    switch (opcionMes)
    {
    case 1:
        cout << "El mes correspondiente es Enero"<< endl;
        break;
    case 2:
        cout << "El mes correspondiente es Febrero"<< endl;
        break;
    case 3:
        cout << "El mes correspondiente es Marzo"<< endl;
        break;
    case 4:
        cout << "El mes correspondiente es Abril"<< endl;
        break;
    case 5:
        cout << "El mes correspondiente es Mayo"<< endl;
        break;
    case 6:
        cout << "El mes correspondiente es Junio"<< endl;
        break;
    case 7:
        cout << "El mes correspondiente es Julio"<< endl;
        break;
    case 8:
        cout << "El mes correspondiente es Agosto"<< endl;
        break;
    case 9:
        cout << "El mes correspondiente es Septiembre"<< endl;
        break;
    case 10:
        cout << "El mes correspondiente es Octubre"<< endl;
        break;
    case 11:
        cout << "El mes correspondiente es Noviembre"<< endl;
        break;
    case 12:
        cout << "El mes correspondiente es Diciembre"<< endl;
        break;
    default:
        cout << "No ha ingresado ninguna opcion valida"<< endl;
        break;
    }
    return 0;
}