import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception
    {
        Scanner scanner = new Scanner(System.in);

        //Solicitar al usuario que ingrese el estado de la tarjeta
        System.out.print("Ingrese el estado de su targeta de biblioteca (1 para activo y 2 para inactiva): ");
        int estadoTargeta = scanner.nextInt();

        //Verificar si la tarjeta esta activa o incativa
        if (estadoTargeta == 1)
        {
            //Tarjeta activa
            System.out.println("Su tarjeta esta activa. Puede realizar prestamos.");
        }

        if (estadoTargeta == 2)
        {
            //Tarjeta inactiva
            System.out.println("Su tarjeta esta inactiva. N0 puedes pedir libros prestados.");
        }

        else
        {
            //Targeta desconocida
            System.out.println("Su ingreso fue desconocido.");
        }
    }
}
