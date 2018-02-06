import java.util.Scanner;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.Locale;
import javax.swing.JOptionPane;
public class Uri1094 {
	
	public static void main (String [] args){
		
		int N, tot, nAni, C, R, S;
		char c;
		
		Scanner s = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("00.00", new DecimalFormatSymbols(new Locale("en", "US")) );
		N = s.nextInt();
		tot = nAni = C = S = R = 0;
		for (int i = 0; i < N; i++)
		{
			nAni = 0;
			nAni = s.nextInt();
			c = ' ';
			c = s.next().charAt(0);
			tot += nAni;
			
			if ( c == 'C'){
				C += nAni;
			}
			if ( c == 'S'){
				S += nAni;
			}
			if ( c == 'R'){
				R += nAni;
			}
			
		}
		float pC = 0, pR = 0, pS = 0;
		pC = (float) (C*100)/tot;
		pR = (float) (R*100)/tot;
		pS = (float) (S*100)/tot;
		
		System.out.println ("Total: " + tot + " cobaias\n" + "Total de coelhos: " + C +
		"\nTotal de ratos: "+ R + "\nTotal de sapos: " + S + "\nPercentual de coelhos: "+
		df.format(pC) +" %\nPercentual de ratos: " + df.format(pR) + " %\nPercentual de sapos: "+ df.format(pS) + " %");
	
	}
}