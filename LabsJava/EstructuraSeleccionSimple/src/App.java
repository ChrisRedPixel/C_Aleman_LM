import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("La targeta de la biblioteca esta activa?(escribe 1 para si y 2 para no):");
        int targeta = scanner.nextInt();

        if (targeta = 1)
        {
            System.out.println("Pude pedir libros prestados.");
        }

        if (targeta = 2)
        {
            System.out.println("No puedes pedir libros prestados.");
        }
    }
}

