import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double a, b, c;
        a = s.nextDouble();
        b = s.nextDouble();
        c = s.nextDouble();
        System.out.printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",
                (a*c)/2, (c*c)* 3.14159,c*(b+a) / 2,b*b, a*b);
    }
}