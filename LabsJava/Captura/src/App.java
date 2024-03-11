import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in); 
        
        System.out.print("Ingrese un número entero: ");
        int entero = scanner.nextInt();

        System.out.print("Ingrese un número flotante: ");
        float flotante = scanner.nextFloat();

        System.out.print("Ingrese un carácter: ");
        char caracter = scanner.next().charAt(0); //Otra forma sería nextChar()

        scanner.nextLine();  // consumir el '\n' dejado por

        System.out.print("Ingrese una cadena de caracteres:");
        String cadena = scanner.nextLine();
        
        
    }

    }
