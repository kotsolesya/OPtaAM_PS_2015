package com.company;

import java.util.Calendar;
import java.util.Date;

public class Task3 {
    public static void pritntDate() {
        Calendar c = Calendar.getInstance();
        c.set(2017, 12, 1);
        Date date = c.getTime();
        System.out.println("Writed by Bidofan at: " + date);
        System.out.println("Present time " + new Date().toString());

    }
}
