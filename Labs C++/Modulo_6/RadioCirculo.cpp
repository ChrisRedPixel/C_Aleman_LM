#include <iostream>
#include <cmath> //Libreria que permite utilizar varias funciones matemáticas
using namespace std;

const double PI = 3.14; //Definir variable global y constante

double calcularAreaCirculo(double radio); //Definir Función

int main()
{
    double radio;

    cout <<"Introduce el radio del círculo: ";
    cin >> radio;

    if (radio < 0)
    {
        cout <<"El radio ingresado no es válido, Por favor, introduce un valor de radio no negativo." <<endl;
    }
    else
    {
        double area = calcularAreaCirculo(radio); //Llamada a la función 

        cout <<"El área del círculo con radio "<< radio <<" es: "<< area <<endl;
    }

    return 0;
}

double calcularAreaCirculo(double radio)
{
    return PI * pow(radio, 2); //Calculando
}