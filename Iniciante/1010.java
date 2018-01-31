import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {
   
    public static void main(String[] args) {
        
        
        Scanner s = new Scanner(System.in);
        DecimalFormat df = (DecimalFormat) DecimalFormat.getCurrencyInstance(Locale.US);
        df.applyPattern(".00");
        int cod1, cod2, qtd1, qtd2;
        float price1, price2 ;
        cod1 = s.nextInt(); 
        qtd1 = s.nextInt(); 
        price1 = s.nextFloat();
        cod2 = s.nextInt(); 
        qtd2 = s.nextInt(); 
        price2 = s.nextFloat();
        
        System.out.println("VALOR A PAGAR: R$ " + df.format(qtd1*price1 + qtd2*price2) );
    }
}