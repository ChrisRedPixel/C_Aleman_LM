public class App {
    public static void main(String[] args) throws Exception 
    {
        //Scanner scanner = new Scanner(System.in); 

        double mes = 0;
        double promedio;

        for(int i = 1; i <= 12; i = i + 1)
        {
            Scanner scanner = new Scanner(System.in); 

            System.out.println("Inserte la temperatura del mes: ");
            double temperatura = scanner.nextDouble();

            mes = mes + temperatura;
        }

        promedio = mes / 12;

        System.out.println("El promedio de las 12 temperaturas durante un año es " + promedio);
    }
}
