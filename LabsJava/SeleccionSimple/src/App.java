import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Introduce un número:");
        int n = scanner.nextInt();

        if (n > 0)
        {
            System.out.println("El número entero es positivo");
        }
    }
}
