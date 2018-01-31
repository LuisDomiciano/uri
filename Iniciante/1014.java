import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a;
        float b;
        a = s.nextInt();
        b = s.nextFloat();
        System.out.printf("%1.3f km/l\n", (float)(a/b));
    }
}