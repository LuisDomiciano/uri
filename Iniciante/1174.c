#include <stdio.h>
#define N 100
int main (void)
{
	register int i = 0;
	float A[N];
	
	for ( i = 0; i < N; i++)
	{
		scanf ("%f", &A[i]);
	}
	for ( i = 0; i < N; i++)
	{
		if ( A[i] <= 10 )
		{
			printf ("A[%d] = %.1f\n", i, A[i]);
		}
	}
	return 0;
}