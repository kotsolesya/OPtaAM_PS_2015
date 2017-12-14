import java.util.Scanner;

public class Pasword {
private static Scanner scanner;

public static void main(String[] args) {
		scanner = new Scanner(System.in);
		System.out.print("¬ведите пароль: ");
		String password1 = scanner.next();
		String password2 = "marina";
		if (password1.equals(password2))
		System.out.println("ѕароль верный");
		else System.out.println("ѕароль не верный");
		}
}
