#include <stdio.h>
#define N 1000
int main (void)
{
	int A[N], n = 0, m = 0;
	register int i = 0;
	
	scanf ("%d", &n);
	m = 0;
	for ( i = 0; i <N; i++)
	{	
		if ( m == n )
		{
			m = 0;
		}
		*(A+i) = m;
		m++;
	}
	for ( i = 0; i < N; i++)
	{
		printf ("N[%d] = %d\n", i, *(A+i));
	}
	return 0;
}