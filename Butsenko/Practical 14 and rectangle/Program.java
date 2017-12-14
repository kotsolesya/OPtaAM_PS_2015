import java.util.List;

public class Program {
    public static void main(String[] args) {
        //Task1
        First.Name();
        //Task2
        Second.Pass();
        //Task3
        Third.Date();
        //Task4
        Four f = new Four();
        List<Integer> list = f.massClass();
        int num = f.entered();
        f.plus(list, num);
        f.minus(list, num);
        f.multiple(list, num);
        f.increment(list);
        f.decrement(list);
        //Task5,6
        int[][] matrix = {{1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}};
        System.out.println("Source matrix: ");
        Task5.pringMatr(matrix);
        System.out.println("Rotated on 90 degrees: ");
        Task5.pringMatr(Task5.rotateMatr(matrix));
        System.out.println("Rotated on 180 degrees: ");
        Task5.pringMatr(Task5.rotateMatr(Task5.rotateMatr(matrix)));
    }
}
