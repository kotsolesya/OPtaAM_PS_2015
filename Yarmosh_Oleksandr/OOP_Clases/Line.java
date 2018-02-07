public class Line {
	public Point point1;
	public Point point2;
	Line(Point point1, Point point2) {
		this.point1 = point1;
		this.point2 = point2;
	}
	public double getLength(){
		return Math.sqrt(Math.pow(this.point1.x - this.point2.x, 2) + 
				Math.pow(this.point1.y - this.point2.y, 2));		
	}
}
