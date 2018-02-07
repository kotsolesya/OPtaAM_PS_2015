package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.print("Write number of task: ");
        Scanner scan = new Scanner(System.in);
        Scanner in = new Scanner(System.in);
        switch (scan.nextInt()) {
            case 1:
                System.out.print("Write your name: ");
                Task1.sayHello(in.nextLine());
                break;
            case 2:
                System.out.print("Write password: ");
                String pass = in.nextLine();
                if (Task2.isConncide(pass))
                    System.out.println("Verification completed");
                else
                    System.out.println("Wrong password");
                break;
            case 3:
                Task3.pritntDate();
                break;
            case 4:
                int array[] = {1, 2, 3, 4, 5};
                for (int i : array) {
                    System.out.println(i + " + " + MassClass.k + " = " + MassClass.add(i));
                    System.out.println(i + " - " + MassClass.k + " = " + MassClass.subtract(i));
                    System.out.println(i + " * " + MassClass.k + " = " + MassClass.multiply(i));
                    System.out.println(i + "++ = " + MassClass.incrment(i));
                    System.out.println(i + "-- = " + MassClass.decrement(i));
                }
            case 5:
                int[][] matrix = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
                System.out.println("Source matrix: ");
                Task5.pringMatr(matrix);
                System.out.println("Rotated on 90 degrees: ");
                Task5.pringMatr(Task5.rotateMatr(matrix));
                System.out.println("Rotated on 180 degrees: ");
                Task5.pringMatr(Task5.rotateMatr(Task5.rotateMatr(matrix)));
                break;
            default:
                System.out.println("Wrong number of task");
        }

    }
}
