#include <iostream>
using namespace std;

int main()
{
    int suma = 0;

    for (int i = 1; i <= 10; i++) // ciclo for va a llegar hasta 10
    {
        suma = suma + i;
    }

    cout << "La suma de los números del 1 al 10 es: " << suma <<endl; 
    //suma final dará 55

    return 0;
}