import java.util.Scanner;

public class Pasword {
private static Scanner scanner;

public static void main(String[] args) {
		scanner = new Scanner(System.in);
		System.out.print("������� ������: ");
		String password1 = scanner.next();
		String password2 = "marina";
		if (password1.equals(password2))
		System.out.println("������ ������");
		else System.out.println("������ �� ������");
		}
}
