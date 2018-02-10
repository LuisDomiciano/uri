#include <stdio.h>
#define N 100

int main (void)
{
	double A [N], n = 0;
	register int i = 0;
	
	scanf ("%lf", &n);
	
	A[0] = n;
	
	for ( i = 0+1; i < N; i++)
	{
		*(A+i) =  *(A+(i-1))/2;
	}
	
	for ( i = 0; i < N; i++)
	{
		printf ("N[%d] = %.4lf\n", i , *(A+i));
	}
	return 0;
}