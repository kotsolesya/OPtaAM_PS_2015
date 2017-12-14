import java.util.Scanner;

public class Zadacha2 {
private static Scanner scan;

public static void Password()
{
scan = new Scanner(System.in);
System.out.println("¬вед≥ть пароль:");
Integer pass = 112234, enterdpass = scan.nextInt();
if (pass.equals(enterdpass))
{
System.out.println("true");
} else {
	System.out.println("false");
}
}
}
