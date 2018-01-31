import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        
   
        Scanner s = new Scanner(System.in);
       
        int numeroFuncionario, horaTrabalhada;
        float valorHora;
        DecimalFormat df = (DecimalFormat) DecimalFormat.getCurrencyInstance(Locale.US);
        df.applyPattern(".00");
        numeroFuncionario = s.nextInt();
        horaTrabalhada = s.nextInt();
        valorHora = s.nextFloat();
        float sal;
        sal  = valorHora * horaTrabalhada;
        System.out.println("NUMBER = " + numeroFuncionario + "\nSALARY = U$ "+df.format(sal));
    }
}