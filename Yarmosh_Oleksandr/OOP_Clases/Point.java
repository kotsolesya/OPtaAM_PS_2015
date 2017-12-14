import java.util.Random;

public class Point {
	public int x;
	public int y;
	Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	Point(){
		Random rnd = new Random();
		this.x = rnd.nextInt(600);
		this.y = rnd.nextInt(400);
	}
}
