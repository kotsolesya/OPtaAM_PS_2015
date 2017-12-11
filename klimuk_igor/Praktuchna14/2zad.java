import java.util.Scanner;

public class 2zad {
private static Scanner scan;

public static void Password()
{
scan = new Scanner(System.in);
System.out.println("¬вед≥ть пароль:");
Integer pass = 798456132, enterdpass = scan.nextInt();
if (pass.equals(enterdpass))
{
System.out.println("true");
} else {
	System.out.println("false");
}
}
}
