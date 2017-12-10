import java.util.Scanner;

public class 1zadanie {
	
public static void main(String[] args) {
		

	Scanner reader = new Scanner(System.in);  
	System.out.println("Введіть Прізвище,Ім'я,по-батькові");
	String n = reader.nextLine(); 
	reader.close();
	System.out.println("Доброго дня, " + n);
	System.out.println (new java.util.Date ().toString ());
	}

}
 