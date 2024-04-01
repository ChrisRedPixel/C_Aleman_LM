#include <iostream>
using namespace std;

int main() 
{
    int antiguedad;

    cout << "Escribe la antiguedad del empleado (en años): ";
    cin >> antiguedad;

    if (antiguedad >= 5)
    {
        cout << "El empleado es elegible para el bono. El empleado recibirá $1000." << endl;
    }

    if (antiguedad < 5)
    {
        cout << "El empleado no es elegible para el bono." << endl;
    }
    
    return 0;

}