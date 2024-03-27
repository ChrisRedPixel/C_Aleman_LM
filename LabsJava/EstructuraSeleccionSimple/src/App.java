import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("La targeta de la biblioteca esta activa?(escribe si o no)");
        boolean targeta = scanner.nextInt();

        if (targeta = "si")
        {
            System.out.println("El número entero es positivo");
        }
    }
}
