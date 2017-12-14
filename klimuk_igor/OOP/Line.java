public class Line {
		 
		public Point point1;
		public Point point2;
		
		public Line(Point point1, Point point2) {
			this.point1 = point1;
			this.point2 = point2;
		}
	
	
	
	
	
		 public double calculateLength()
		    {
		       return Math.sqrt((this.point2.x-this.point1.x)*(this.point2.x-this.point1.x)+(this.point2.y-this.point1.y)*(this.point2.y-this.point1.y));
		    }
		}
