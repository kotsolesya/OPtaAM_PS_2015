import java.util.Date;
import java.util.Calendar;

public class Zadacha3 {
	public static void main (String args[]){
 String s = "������";
 Date d = new Date();
 System.out.println("��������� ������� ��� " + s + " " + d);
 
 Calendar c = Calendar.getInstance();
 c.set(Calendar.YEAR,2017);
 c.set(Calendar.MONTH,Calendar.JUNE);
 c.set(Calendar.DAY_OF_MONTH,25);
 System.out.println("����� ������� ��� " + s + " " + c.getTime());
}
}
