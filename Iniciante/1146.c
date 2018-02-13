#include <stdio.h>

int main (void)
{
	int N = 0;
	register int i = 0;
	
	do {
		scanf ("%d", &N);
		for ( i = 0; i < N; i++)
		{
			if ( i < N-1 )
			{
				printf ("%d ", i+1);
			} else {
				printf ("%d\n", i+1);
			}
		}
	} while ( N != 0 );
	
	
	return 0;
}