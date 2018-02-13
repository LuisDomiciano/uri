#include <stdio.h>

int main (void)
{
	int N = 0, ant = 0, prox = 0, sm = 0;
	register int i = 0;
	
	scanf ("%d", &N);
	ant = 0;
	prox = 1;

	for ( i = 0; i < N; i++)
	{
		if ( i < N-1){
			printf ("%d ", sm);
		} else {
			printf ("%d\n", sm);
		} 
		sm = ant + prox;
		prox = ant;
		ant = sm;		
	}
	
	return 0;
}