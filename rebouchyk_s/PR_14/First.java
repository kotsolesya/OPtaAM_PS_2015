import java.util.Scanner;

public class First {
    public static void Name(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name  = sc.nextLine();
        System.out.println("Hi " + name);
    }
}
