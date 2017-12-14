public class Task5 {

    public static int[][] rotateMatr(int[][] matr) {
        int[][] addMatr = new int[3][3];
        int I = 0;
        int J = matr.length - 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                addMatr[I++][J] = matr[i][j];
            I = 0;
            J--;
        }
        return addMatr;
    }

    public static void pringMatr(int[][] matr) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(matr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
