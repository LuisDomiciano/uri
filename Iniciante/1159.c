#include <stdio.h>

int main (void)
{
	int n = 0, par = 0, cont = 0;
	
	for ( ; ; )
	{		
		scanf ("%d", &n);
		if ( n == 0 )
		{
			return 0;
		}
		while (cont != 5 )
		{
			if ( n % 2 == 0)
			{
				par += n;
				cont++;
			}
			n++;
		}
		printf ("%d\n", par);
		par = 0;
		cont = 0;		
	} 
	
	return 0;
}