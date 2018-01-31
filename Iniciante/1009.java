import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {
   
    public static void main(String[] args) {
        
        
        Scanner s = new Scanner(System.in);
        String nome;
        double sal, mont ;
        DecimalFormat df = (DecimalFormat) DecimalFormat.getCurrencyInstance(Locale.US);
        df.applyPattern(".00");
        nome = s.nextLine();
        sal = s.nextDouble();
        mont = s.nextDouble();
        System.out.println("TOTAL = R$ " + df.format(sal + (0.15*mont)));
    }
}