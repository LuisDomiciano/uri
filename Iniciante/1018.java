import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
         Scanner s = new Scanner(System.in);
        int N100, N50, N20, N10, N5, N2, N1;
        int pag;
        N100 = N50 = N20= N10 = N5 = N2 = N1 = 0;
        pag = s.nextInt();
        System.out.println(pag);
        while (pag > 0){
            if ( pag >= 100){
                
                pag -= 100;
                N100++;
            } 
                if ( pag < 100 && pag >= 50){
                    
                    pag -= 50;
                    N50++;
                } if ( pag < 50 && pag >= 20){
                    
                    pag -= 20;
                    N20++;
                }if ( pag < 20 && pag >= 10 ){
             
                    pag -= 10;
                    N10++;
                }if ( pag < 10 && pag >= 5 ){
                    pag -= 5;
                    N5++;
                } if ( pag < 5 && pag >= 2){
                    
                    pag -= 2;
                    N2++;
                } if ( pag < 2&& pag >= 1){
                    
                    pag -= 1;
                    N1++;
               }
            }
         System.out.printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
                 N100, N50, N20, N10, N5, N2, N1
         );
 
    }
 
}