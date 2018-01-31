import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double x1, x2, y1, y2, d1, d2;
        x1 = s.nextDouble();
        x2 = s.nextDouble();
        y1 = s.nextDouble();
        y2 = s.nextDouble();
        
        d1 = y1 - x1;
        d2 = y2 - x2;
        System.out.printf("%.4f\n", Math.sqrt(d1*d1 + d2*d2));
    }
}