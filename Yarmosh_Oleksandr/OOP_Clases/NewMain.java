import java.util.Random;

public class NewMain {

	public static void main(String[] args) {
		Point point1 = new Point(2, 10);
		Point point2 = new Point(8, 2);
		Point point3 = new Point(5, 4);
		Point point4 = new Point(9 ,1);
		Rectangle rec1 = new Rectangle(point1, point2);
		Rectangle rec2 = new Rectangle(point3, point4);
		rec1.printPoints();
		rec2.printPoints();
		System.out.println("Cross rectangles: " + rec1.isCross(rec2));
		if(rec1.isCross(rec2)) {
			Rectangle rec3 = new Rectangle(point3, point2);
			Random rnd = new Random();
			for (int i = 0; i < 10; i++) {
				System.out.println("Rand point" + i + ": " + (rnd.nextInt(rec3.getWeight()) + rec3.point1.x) + " " + (rnd.nextInt(rec3.getHeight()) + rec3.point2.y));
			}
		}
	}
}
