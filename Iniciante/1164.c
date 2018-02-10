#include <stdio.h>

int main (void)
{
	int N = 0, x = 0, i = 0;
	
	scanf ("%d", &N);
	
	for ( i = 0; i < N; i++)
	{
		scanf ("%d", &x);
		int sm = 0;
		register int j = 0;
		for ( j = 0+1; j < x; j++)
		{
			if ( x % j == 0)
			{	
				sm += j;
			}
		}
		if ( sm == x )
		{
			printf ("%d eh perfeito\n", x);
			sm = 0;
		} else {
			printf ("%d nao eh perfeito\n", x);
		}
	}
	
	return 0;
}