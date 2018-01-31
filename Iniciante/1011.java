import java.text.DecimalFormat;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        double r;
        r = s.nextDouble();
        DecimalFormat df = (DecimalFormat) DecimalFormat.getCurrencyInstance(Locale.US);
        df.applyPattern(".000");
        System.out.println("VOLUME = " +  df.format( (double)(4 / 3.0) * 3.14159 * (r*r*r)) );
    }
}