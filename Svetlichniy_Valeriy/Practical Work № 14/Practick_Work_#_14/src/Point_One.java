import java.util.Scanner;

public class Point_One
{
    public static void You_Name()
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Введите имя: ");
        String you_name = scan.nextLine();
        System.out.println("Привет " + you_name);
    }
}

