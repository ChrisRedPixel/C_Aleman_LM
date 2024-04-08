#include <iostream>
using namespace std;

int main()
{
    string nombreEstudiante;
    int sumaCalificaciones, promedio, calificacionEstudiante, i;

    sumaCalificaciones = 0;

    for(i = 1; i <= 10; i = i + 1)
    {
        //número de estudiante
        cout <<"Estudiante #"<< i <<": "<<endl;
        
        //nombre del estudiante
        cout <<"Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

        //calificación del estudiante
        cout <<"Ingrese la puntuación de "<< nombreEstudiante <<": ";
        cin >> calificacionEstudiante;

        //suma de calificaciónfinal
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;
    }
    //promedio final
    promedio = sumaCalificaciones/ i;
    cout <<"El promedio general de las calificaciones del grupo es: "<< promedio <<endl;

}