#include <stdio.h>

int val_nota (int nt)
{
	if ( (nt < 0 || nt > 10 ) ) return -1;
	return 1;
}
int main (void)
{
	float n1 = 0, n2 = 0, md = 0;
	int cont = 0;
	
	do {
		scanf ("%f", &n1);
		if ( val_nota(n1) < 0){
			printf ("nota invalida\n");
		}
		scanf ("%f", &n2);
		if ( val_nota(n2) < 0){
			printf ("nota invalida\n");
		}
		
		if ( val_nota(n1) > 0 ){
			md += n1;
			cont++;
		}
		if ( val_nota(n2) > 0 ){
			md += n2;
			cont++;
		}
		
	} while (cont != 2);
	printf ("media = %.2f\n", md/2);
	return 0;
}