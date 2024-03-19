#include <iostream>
using namespace std;
//proposito de programa: calcular la distancia

int main()
{
    double distancia, velocidad, tiempo;

    cout <<"A que velocidad fueron? (resultado va a ser en kilometros dividido en horas [km/h]): ";
    cin >> velocidad;
    cout <<"Velodidad: "<< velocidad <<" km/h"<<endl;

    cout <<"Cuanto tiempo duro el viaje? (resultado va a ser en horas): ";
    cin >> tiempo;
    cout <<"Tiempo: "<< tiempo <<" horas"<<endl;

    distancia = velocidad * tiempo;

    cout <<"La distancia que recorriste en el viaje es un total de "<< distancia <<" kilometros."<<endl;

    return 0;

}