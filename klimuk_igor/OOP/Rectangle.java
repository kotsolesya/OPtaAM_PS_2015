public class Rectangle {
		public Point point1;
		public Point point2;
		
		public Rectangle(Point point1, Point point2) {
			this.point1 = point1;
			this.point2 = point2;
		}
		public double xStorona()
	    {
	       return this.point2.x-this.point1.x;
	    }
		public double yStorona()
	    {
	       return this.point2.y-this.point1.y;
	    }
		
		
		boolean intersects(Point point1, Point point2) {
	
			if (point1.y < point2.y || point1.y > point2.y) {
	
			return false;
	
			}
	
	
			if (point1.x < point2.x || point1.x > point2.x) {
	
			return false;
	
			}
	
			return true;
	
			}
		
		
		
		
	}

