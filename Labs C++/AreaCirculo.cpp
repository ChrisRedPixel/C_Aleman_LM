#include <iostream>
using namespace std;

int main()
{
    double area, radio;
    //double radio
    const double PI = 3.14; //Identificador constante

    cout <<"Ingrese la medida del radio: ";
    cin >> radio;

    area = PI * radio * radio;

    cout <<"EL area del circulo es: "<<area << endl;

    return 0;

}