import java.util.Scanner;//Te permite definir Scanner

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in); 

        double mes = 0;
        double promedio, temperatura;

        for(int i = 1; i <= 12; i = i + 1)
        { 
            //se inserta la temperatura durante el mes
            System.out.print("Inserte la temperatura del mes (Celsius): ");
            temperatura = scanner.nextDouble();

            //se sigue hacia el siguiente mes y se suma la temperatura
            mes = mes + temperatura;
        }

        //se calcula el promedio
        promedio = mes / 12;

        //resultado final del promedio
        System.out.println("El promedio de las 12 temperaturas durante un año es " + promedio + " celsius.");
    }
}
