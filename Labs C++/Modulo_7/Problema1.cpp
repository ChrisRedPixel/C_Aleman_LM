#include <iostream>
using namespace std;

int main()
{
    int num;
    int suma = 0;
    int array[5];
    int elementos;

    cout<<"Ingrese la cantidad de elementos: ";
    cin >> elementos;

    if (elementos < 100 && elementos > 1)
    {
        for (int i = 0; i < elementos; i++)
        {
            cout <<"Ingrese un numero: "; //Se inserta un número entre 0 y 100
            cin >> num;

            
                array[i] = num;//Se le da ese número a uno de los elementos
                suma = suma + array[i];//Se suman los elementos
        }
    }

    else
    {
        cout <<"La cantidad de elementos tiene que estar entre 1 y 100.";
        return 1;
    }
    
    cout <<"La suma final de los elementos es: "<< suma <<endl;
   return 0;
}