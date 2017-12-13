public class HelloWord {
		 public static void main(String[] args){
	        System.out.println("Hello World!");
	        Point point = new Point();
	        Point point1 = new Point(1,2);
	        Point point2 = new Point(1.5,3.0);
	        Line line1 = new Line(point1,point2); 
	        Rectangle rectangle1= new Rectangle(point1,point2);
	        
	        System.out.print(point.x+" "+point.y+"\n ");//point object
	        System.out.print(point1.x+" "+point1.y+"\n ");//point object
	        System.out.print(point2.x+" "+point1.y+"\n ");//point object
	        System.out.print(" "+line1.calculateLength()+"\n ");
	        
	        System.out.print("Peresikaytsya li "+rectangle1.intersects(point1, point2)+" ");
	}
	}

