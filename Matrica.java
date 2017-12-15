
public class Matrica {
	private static int [][] ar= { 
			{1,2,3,4,5}, 
			{6,7,8,9,10}, 
			{11,12,13,14,15}, 
			{16,17,18,19,20}, 
			{21,22,23,24,25} 
			}; 

			public static void print2MrArr(int [][] prArr) { 
			int j; 
			for (int i = 0; i < prArr.length; i++) { 
			for (j = 0; j < prArr.length; j++) { 
			System.out.printf("%4d", prArr[i][j]); 
			} 
			System.out.println(); 
			} 
			System.out.println(); 
			} 

			public static void rotateArr(int [][] rotAr, int beginIndex, int marMatrix) { 
			int [] memo = new int[2]; 

			for (int x2 = 0; x2 < marMatrix - beginIndex * 2 - 1; x2++) { 
			int x1 = marMatrix - 1 - x2; 
			memo[0] = rotAr[beginIndex][x2 + beginIndex]; 
			memo[1] = rotAr[x2 + beginIndex][x2 + x1 - beginIndex]; 

			rotAr[x2 + beginIndex][x2 + x1 - beginIndex] = memo[0]; 
			memo[0] = rotAr[x2 + x1 - beginIndex][x1 - beginIndex]; 

			rotAr[x2 + x1 - beginIndex][x1 - beginIndex] = memo[1]; 
			memo[1] = rotAr[x1- beginIndex][beginIndex]; 
			rotAr[x1- beginIndex][beginIndex] = memo[0]; 
			rotAr[beginIndex][x2 + beginIndex] = memo[1]; 

			} 
			} 
			public static void main(String[] args) { 
			print2MrArr(ar); 
			rotateArr(ar, 0, 5); // повертає матрицю на 90 градусів 
			rotateArr(ar, 0, 5); // повертає ще на 90 = на 180 
			rotateArr(ar, 0, 5); //+ 90 = 270 
			print2MrArr(ar); 
			} 
}
