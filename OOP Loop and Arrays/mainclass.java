import java.util.*;
import java.text.*;
public class mainclass{
    public static void main (String[]args){   
        Date today; //object of type Date namely today
        Locale[] locales = {Locale.US,Locale.UK,Locale.GERMANY,Locale.FRANCE}; //array of built-in type Locale namely locales 
        int[] styles = {DateFormat.FULL,DateFormat.LONG,DateFormat.MEDIUM,DateFormat.SHORT}; // array of primitive type int namely styles
        String[] stylesintext = {"FULL","LONG","MEDIUM","SHORT"}; //array of immutable legacy type String to hold style in text
        DateFormat fmt; //object of type DateFormat namely fmt

        for (int i = 0; i <= 3; ++i){ //for loop to print specific country
            System.out.println(locales[i].getDisplayCountry());
            for (int j = 0; j <= 3; ++j){ //for loop to print all styles 

                df = DateFormat.getDateInstance(styles[j],styles[i]);

            }
        }
    }
}     

        // DateFormat.getDateInstance(styles[j],styles[i]);
