#include <iostream>
using namespace std;

int main()
{
    int categoria;

    cout <<"Bienvenido a la tienda de musica: "<<endl;
    cout <<"CATEGORIAS"<<endl;
    cout <<"1. Guitarras"<<endl;
    cout <<"2. Pianos"<<endl;
    cout <<"3. Baterias"<<endl;
    cout <<"4. Violines"<<endl;
    cout <<"5. Flautas"<<endl;
    cout <<"-------------------------------------"<<endl;
    cout <<"Escoja una categoria de instrumento: "<<endl;
    cin >> categoria;

    switch(categoria)
    {
        case 1: //Guitarra
            cout <<"Las guitarras tienen un 10% de descuento."<<endl;
            break;

        case 2: //Pianos
            cout <<"Los pianos tienen un 15% de descuento."<<endl;
            break;
        
        case 3: //Baterías
            cout <<"Las baterias tienen un 20% de descuento."<<endl;
            break;
        
        case 4: //Violines
            cout <<"Los violines tienen un 12% de descuento."<<endl;
            break;
        
        case 5: //Flautas
            cout <<"Las flautas tienen un 8% de descuento."<<endl;
            break;
        
        default: //En caso de que el usuario ingrese una opción no válida
            cout<<"Categoria de instrumento no reconocida. Intente de nuevo.";
    }

    return 0;

}