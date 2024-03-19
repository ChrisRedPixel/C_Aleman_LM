#include <iostream>
using namespace std;
//proposito: buscar area de un cuadrado

int main()
{
    double area, lado;

    cout <<"Introduzca la longitud de un lado del cuadrado: ";
    cin >> lado;

    area = lado * lado;

    cout <<"El area del cuadrado es: "<< area <<endl;

    return 0;

}
