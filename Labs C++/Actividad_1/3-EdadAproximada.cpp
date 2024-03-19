#include <iostream>
using namespace std;

int main()
{
    double anoNacimiento, anoActual, edad;

    cout <<"Ingrese el ano en que nacio alguien: ";
    cin >> anoNacimiento;

    cout <<"Ingrese el ano actual: ";
    cin >> anoActual;

    edad = anoActual - anoNacimiento;

    cout <<"El ano aproximado que tiene esta persona es: "<< edad <<" anos."<<endl;

    return 0;

}