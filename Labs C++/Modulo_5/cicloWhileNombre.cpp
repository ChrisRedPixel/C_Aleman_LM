#include <iostream>
using namespace std;

int main()
{
    string suNombre;
    int num = 0;

    cout <<"Cual es su nombre?: ";//Se inserta el nombre del usador
    cin >> suNombre;

    while (num < 10)
    {
        cout <<"Hola "<< suNombre <<endl;//El nombre que se insertó se imprime
        num = num + 1;
    }
    
    return 0;

}