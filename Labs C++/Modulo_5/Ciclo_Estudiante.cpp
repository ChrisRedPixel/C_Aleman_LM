#include <iostream>
using namespace std;

int main()
{
    string nombreEstudiante;
    double sumaCalificaciones, promedio, calificacionEstudiante;
    int i, numeroEstudiantes;

    sumaCalificaciones = 0;

    cout <<"Ingrese la cantidad de estudiantes (max 10): ";
    cin >> numeroEstudiantes;

    if(numeroEstudiantes > 10 || numeroEstudiantes <= 0)
    {
        cout <<"El número de estudiantes debe ser un valor positivo y no mayor a 10."<<endl;
        return 1;
    }

    for(i = 1; i <= numeroEstudiantes; i = i + 1)
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
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante; /*Otra opcion:
        sumaCalificaciones += sumaCalificaciones;*/
    }

    //promedio final
    promedio = sumaCalificaciones/ numeroEstudiantes;
    cout <<"El promedio general de las calificaciones del grupo es: "<< promedio <<endl;

    return 0;

}