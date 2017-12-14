import java.util.Random;
	
	public class Point {
		public double x;
		public double y;
	 
	    public Point() {
	    	Random random = new Random();
	        this.x =  random.nextInt(100);
	        this.y =  random.nextInt(100);
	        
	    }
	    public Point(double x,double y) {
	        this.x = x;
	        this.y = y;
	        
	    }
	}


