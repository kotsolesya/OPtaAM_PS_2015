import java.util.Scanner;

public class Point_Two
{
    public static void You_Password()
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Введите пароль: ");
        Integer you_pass = 1234509876, enterdpass = scan.nextInt();
        if (you_pass.equals(enterdpass))
        {
            System.out.println("Пароль верный");
        }
        else
        {
            System.out.println("Введен не верный пароль");
        }
    }
}
