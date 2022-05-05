import java.util.*;
import java.text.*;
public class nowdate {
    public static void main (String[]args){
        Date now; //object initialization named now type Date which gives date
        SimpleDateFormat fmt;  //object initialization named fmt type SimpleDateFormat which gives format
        now = new Date(); //Object named now which is accessing  Date
        fmt = new SimpleDateFormat ("dd MMM yyyy"); //object named fmt which is accessing SimpleDateFormat
        System.out.println("Today's date : " + fmt.format(now)); //printing today's date      
    }
}

        