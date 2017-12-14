public class Rectangle {
	public Point point1;
	public Point point2;
	
	Rectangle(Point point1, Point point2) {		
		this.point1 = max(point1, point2);
		this.point2 = min(point1, point2);
	}
	
	public int getHeight(){
		return point1.y - point2.y;
	}
	
	public int getWeight(){
		return point2.x - point1.x;
	}
	public double square(){
		return this.getHeight()*this.getWeight();
	}
	
	static public Point max(Point point1, Point point2){
		Point p = new Point();
		if(point1.x < point2.x){
			p.x = point1.x;
			p.y = point1.y;
		}
		else {
			p.x = point2.x;
			p.y = point2.y;
		}
		return p;
	}
	
	static public Point min(Point point1, Point point2){
		Point p = new Point();
		if(point1.x > point2.x){
			p.x = point1.x;
			p.y = point1.y;
		}
		else {
			p.x = point2.x;
			p.y = point2.y;
		}
		return p;
	}

	public void printPoints(){
		System.out.println("Point1 " + this.point1.x + " " + this.point1.y);
		System.out.println("Point2 " + this.point2.x + " " + this.point2.y);
	}
	
	public boolean isCross(Rectangle rec){
		return ((rec.point1.x > this.point1.x && rec.point1.x < this.point2.x) && (this.point2.y > rec.point2.y  && this.point2.y < rec.point1.y));
	}
}
