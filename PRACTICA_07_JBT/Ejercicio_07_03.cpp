// Materia: Programación I, Paralelo 4
// Autor: Julian Blacutt Troche
// Carnet: 12420312
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

float sumaVal(vector<float> valores, int N);
float promVal(double suma, int N);
void desviacionesVal(vector<float>&valores, vector<float>&desviacion, int N, float prom);
void mostrarDesviaciones(int N, vector<float>&valores, vector<float>&desviacion);
float calcularVarianza(vector<float>&desviacion, int N);

int main()
{
    system("chcp 65001");
    system("cls");
    
    int N=0;
    cout << "Ingrese la cantidad de datos que desee rellenar: ";
    cin >> N;

    vector<float> valores(N);
    vector<float> desviacion(N);

    cout<<endl;

    for(int i = 0; i < N; i++){
        cout << "Ingrese el valor de la posición "<<i<<": ";
        cin >> valores[i];
    }
    
    double sum=sumaVal(valores,N);
    cout<<"\nLa suma de todos los valores es: "<<sum<<endl;
    double prom=promVal(sum,N);
    cout<<"El promedio de estos valores es: "<<prom<<endl;
    cout<<"La desviación de los valores es: "<<endl;
    desviacionesVal(valores,desviacion,N,prom);
    mostrarDesviaciones(N,valores,desviacion);
    double var=calcularVarianza(desviacion,N);
    cout<<"La varianza de los datos es: "<<var<<endl;

    return 0;
}

float sumaVal(vector<float> valores, int N)
{
    float suma=0;
    for (int i = 0; i < N; i++)
    {
        suma+=valores[i];
    }
    return suma;
}

float promVal(double suma, int N)
{
    float promedio=suma/N;
    return promedio;
}

void desviacionesVal(vector<float>&valores, vector<float>&desviacion, int N, float prom)
{
    for (int i = 0; i < N; i++)
    {
        desviacion[i]=valores[i]-prom;
    }
}
void mostrarDesviaciones(int N, vector<float>&valores, vector<float>&desviacion)
{
    cout<<"Valor\tDesviación\n";
    for (int i = 0; i < N; i++)
    {
        cout<<valores[i]<<"\t"<<desviacion[i]<<endl;
    }
    
}

float calcularVarianza(vector<float>&desviacion, int N)
{
    float suma=0;
    for (int i = 0; i < N; i++)
    {
        suma+= desviacion[i]*desviacion[i];
    }
    return suma/N;
}