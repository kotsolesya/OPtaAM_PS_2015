import java.util.Calendar;
import java.util.Date;

public class Zakaz {
public static void main (String args []){

		String s = "Бульда";
		Date d = new Date();
		System.out.println("Получения задания для " + s + " " + d);

		Calendar c = Calendar.getInstance();
		c.set(Calendar.YEAR,2017);
		c.set(Calendar.MONTH,Calendar.DECEMBER);
		c.set(Calendar.DAY_OF_MONTH,22);

		System.out.println("Сдача задания для " + s + " " + c.getTime());
		}
	
}
