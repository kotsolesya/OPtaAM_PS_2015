import java.util.Calendar;
import java.util.Date;

public class Zakaz {
public static void main (String args []){

		String s = "������";
		Date d = new Date();
		System.out.println("��������� ������� ��� " + s + " " + d);

		Calendar c = Calendar.getInstance();
		c.set(Calendar.YEAR,2017);
		c.set(Calendar.MONTH,Calendar.DECEMBER);
		c.set(Calendar.DAY_OF_MONTH,22);

		System.out.println("����� ������� ��� " + s + " " + c.getTime());
		}
	
}
