#include <stdio.h>
#define N 20

int main (void)
{
	int A[N], B[N], aux = 0;
	register int i = 0, j = 0;
	
	for (i = 0; i < N; i++)
	{
		scanf ("%d", &A[i]);
	}
	
	i = 0;
	j = N-1;
	while ( i < N )
	{
		*(B+j) = *(A+i);
		i++;
		j--;
	}
	for ( j = 0; j < N; j++)
	{
		printf ("N[%d] = %d\n", j, *(B+j));
	}
	
	return 0;
}