import java.util.Scanner;

public class Second {
    public static void Pass(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your password: ");
        Integer password = 754373, pas = sc.nextInt();
        System.out.println(password.equals(pas) ? "Your password is correct" : "Your password is not valid");
    }
}
