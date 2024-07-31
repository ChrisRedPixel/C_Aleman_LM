#include <iostream>
using namespace std;
//proposito: buscar area de un rectangulo

int main()
{
    double area, base, altura;

    cout <<"Introduzca la longitud del rectangulo: ";
    cin >> base;

    cout <<"Introduzca la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;

    cout <<"El area del rectangulo es: "<< area <<endl;

    return 0;

}