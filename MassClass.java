import java.util.Scanner;

public class MassClass {
	private static Scanner in;

	public static void main (String args []){
		int[] m ;
		int k;
		int n;
		int r, d, v, b, ink, z, u, dek;
		in = new Scanner(System.in);
		System.out.println("Введите количество чисел массива:");
		n = in.nextInt();
		System.out.println("Введите число k:");
		k = in.nextInt();
		m = new int [n];
		for (int i = 0; i<n; i++)
		{
		System.out.println("Введите m[" + i + "] = ");
		m[i] = in.nextInt();
		r = m[i] * k;
		d = m[i] + k;
		v = m[i] - k;
		b = m[i]++;
		ink = m[i];
		z = m[i]--;
		u = m[i]--;
		dek = m[i];


		System.out.println("Добавление:"+ d);
		System.out.println("Вычитание:"+ v);
		System.out.println("Умножение:"+ r );
		System.out.println("Инкремент:"+ink);
		System.out.println("Декремент:"+dek);
		}
		}
}
