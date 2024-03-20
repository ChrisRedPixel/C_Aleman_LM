#include <iostream>
using namespace std;
//proposito: buscar area de un cuadrado

int main()
{
    double area, base, altura, perimetro;

    cout <<"Introduzca la longitud de la base del rectangulo: ";
    cin >> base;

    cout <<"Introduzca la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;

    cout <<"El area del rectangulo es: "<< area <<endl;

    perimetro = 2 * base + 2 * altura;

    cout <<"El perímetro del rectangulo es: "<< perimetro <<endl;

    return 0;

}