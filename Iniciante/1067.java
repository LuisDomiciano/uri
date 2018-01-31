import java.util.Scanner;



public class Main {

    public static void main(String[] args) {
        
      Scanner s = new Scanner(System.in);
      int x;
      x= s.nextInt();
      
      for ( int i = 0+1; i <= x; i++){
          if ( i % 2 != 0) System.out.println(i);
      }
       
     

    }
}