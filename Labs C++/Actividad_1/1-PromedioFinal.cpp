#include <iostream>
using namespace std;

int main()
{
    //valores de los examenes
    double examen1, examen2, examen3, examen4, promedioFinal;

    cout <<"Inserte el resultado del primer examen: ";
    cin >> examen1;

    cout <<"Inserte el resultado del segundo examen: ";
    cin >> examen2;

    cout <<"Inserte el resultado del tercer examen: ";
    cin >> examen3;

    cout <<"Inserte el resultado del cuarto examen: ";
    cin >> examen4;
    //proceso para obtener promedio final
    promedioFinal = examen1 + examen2 + examen3 + examen4;
    //resultado del promedio final
    cout <<"El promedio final obtenido fue: "<< promedioFinal <<" puntos.";

    return 0;
}