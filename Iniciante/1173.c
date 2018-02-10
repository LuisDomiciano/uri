	#include <stdio.h>

	int main (void)
	{
		int N = 0, vet [10];
		register int i = 0;
		
		scanf ("%d", &N);
		vet [0] = N;
		for ( i = 0+1; i < 10; i++)
		{	
			vet [i] = vet [i-1] * 2;
		}
		for ( i = 0; i < 10; i++)
		{
			printf ("N[%d] = %d\n", i, vet[i]);
		}
		return 0;
	}