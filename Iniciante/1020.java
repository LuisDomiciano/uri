import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        int idade, ano, mes, dia;
        ano = mes = dia = 0;
        idade = s.nextInt();
        
        while ( idade >  0 ){
            if ( idade >= 365 ){
                idade -= 365;
                ano++;
            } else if ( idade < 365 && idade >= 30 ){
                    idade -= 30;
                    mes++;
            } else if ( idade < 30 && idade >= 0){
                idade--;
                dia++;
            }
            
        }
        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
        

    }
}