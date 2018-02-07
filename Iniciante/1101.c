#include <stdio.h>

int main (void)
{	int n = 0, m = 0;
	do { 
		int i = 0, sm = 0, menor = 0, maior = 0;
		n = m = 0;
		scanf ("%d %d", &n, &m);
		if ( n < m )
		{
			menor = n;
			maior = m;
		} else {
			menor = m;
			maior = n;
		}
		if ( n <= 0 || m <= 0 )
		{
			return 0;
		}
		for ( ; menor <= maior; menor++ )
		{
			printf ("%d ", menor);
			sm += menor;
		}
		
		printf ("Sum=%d\n", sm);
	} while ( (n > 0) && (m > 0));
	
	return 0;
}