#include <iostream>
using namespace std;

int main() 
{
    int antiguedad;

    cout << "Cuantos años tiene el empleado?: ";
    cin >> antiguedad;

    if (antiguedad > 4)
    {
        cout << "El empleado recibirá un bono de $1000." << endl;
    }
    
    return 0;

}