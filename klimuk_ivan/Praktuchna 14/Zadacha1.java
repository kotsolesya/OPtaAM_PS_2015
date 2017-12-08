import java.util.Scanner;

public class Zadacha1 {
	
public static void main(String[] args) {
		
	Scanner reader = new Scanner(System.in);  
	System.out.println("Введіть Прізвище,Ім'я,по-батькові");
	String n = reader.nextLine(); 
	reader.close();
	System.out.println("Привіт, " + n);
	System.out.println (new java.util.Date ().toString ());
	}

}
 