#include <iostream>
using namespace std;

int main()
{
    double birthYear, currentYear, edad;

    cout <<"Ingrese el año en que nació alguien: ";
    cin >> birthYear;

    cout <<"Ingrese el año actual: ";
    cin >> currentYear;

    edad = currentYear - birthYear;

    cout <<"El año aproximado que tiene esta persona es: "<< edad <<" años."<<endl;

    return 0;

}