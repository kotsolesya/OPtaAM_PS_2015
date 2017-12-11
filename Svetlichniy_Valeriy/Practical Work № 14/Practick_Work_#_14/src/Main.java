import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        System.out.print("Введите номер задания: ");
        Scanner scan = new Scanner(System.in);
        Scanner in = new Scanner(System.in);
        switch(scan.nextInt())
        {
            case 1:
                Point_One.You_Name();
                break;
            case 2:
                Point_Two.You_Password();
                break;
            case 3:
                Point_Three.Date();
                break;
            case 4:
                int array[] = {1,2,3,4,5};
                for(int i : array)
                {
                    System.out.println(i + " + " + MassClass.k + " = " + MassClass.add(i));
                    System.out.println(i + " - " + MassClass.k + " = " + MassClass.subtract(i));
                    System.out.println(i + " * " + MassClass.k + " = " + MassClass.multiply(i));
                    System.out.println(i + "++ = " + MassClass.incrment(i));
                    System.out.println(i + "-- = " + MassClass.decrement(i));
                }
                break;
            case 5:
                int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
                System.out.println("Исходная матрица:");
                Point_Five.pringMatr(matrix);
                System.out.println("Вращается на 90 градусов:");
                Point_Five.pringMatr(Point_Five.rotateMatr(matrix));
                System.out.println("Вращается на 180 градусов:");
                Point_Five.pringMatr(Point_Five.rotateMatr(Point_Five.rotateMatr(matrix)));
                break;
            default:
                System.out.println("Введите номер задания: ");
        }
    }
}