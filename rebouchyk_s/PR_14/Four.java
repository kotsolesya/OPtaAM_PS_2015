import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Four {
    public int entered(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number which will be used for function: ");
        return sc.nextInt();
    }

    public ArrayList<Integer> massClass(){
        ArrayList<Integer> array = new ArrayList<>();
        for (int i = 0; i < 10; i++) {
            Integer r = 1 + (int) (Math.random() * 100);
            array.add(r);
        }
        System.out.println("Generated array: " + array);
        return array;
    }

    public void plus(List<Integer> arr, int a){
        for (int i = 0; i < arr.size(); i++) {
            arr.set(i, arr.get(i) + a);
        }
        System.out.println("Plus array: " + arr);
    }

    public void minus(List<Integer> arr, int a){
        for (int i = 0; i < arr.size(); i++) {
            arr.set(i, arr.get(i) - a);
        }
        System.out.println("Minus array: " + arr);
    }

    public void multiple(List<Integer> arr, int a){
        for (int i = 0; i < arr.size(); i++) {
            arr.set(i, arr.get(i) * a);
        }
        System.out.println("Multiple array: " + arr);
    }

    public void increment(List<Integer> arr){
        for (int i = 0; i < arr.size(); i++) {
            arr.set(i, arr.get(i) + 1);
        }
        System.out.println("Increment array: " + arr);
    }

    public void decrement(List<Integer> arr){
        for (int i = 0; i < arr.size(); i++) {
            arr.set(i, arr.get(i) - 1);
        }
        System.out.println("Decrement array: " + arr);
    }
}
