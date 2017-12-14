import java.util.Scanner;

public class Hello {
public static void main(String[] args)
{
	Scanner userInputScanner = new Scanner(System.in);
	System.out.print("What is your name? ");
	String userInputName = userInputScanner.nextLine();
	System.out.println("Hello " + userInputName + ":)");
	
}
}
