import java.util.Scanner;

public class MassClass {
	private static Scanner in;

	public static void main (String args []){
		int[] m ;
		int k;
		int n;
		int r, d, v, b, ink, z, u, dek;
		in = new Scanner(System.in);
		System.out.println("������� ���������� ����� �������:");
		n = in.nextInt();
		System.out.println("������� ����� k:");
		k = in.nextInt();
		m = new int [n];
		for (int i = 0; i<n; i++)
		{
		System.out.println("������� m[" + i + "] = ");
		m[i] = in.nextInt();
		r = m[i] * k;
		d = m[i] + k;
		v = m[i] - k;
		b = m[i]++;
		ink = m[i];
		z = m[i]--;
		u = m[i]--;
		dek = m[i];


		System.out.println("����������:"+ d);
		System.out.println("���������:"+ v);
		System.out.println("���������:"+ r );
		System.out.println("���������:"+ink);
		System.out.println("���������:"+dek);
		}
		}
}
