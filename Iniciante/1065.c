#include <stdio.h>
 
int main() {
 
	int n, i = 0, cont = 0;
	for ( i = 0; i <5; i++)
	{	n = 0;
		scanf ("%d", &n);
		if ( n % 2 == 0)
		{
			cont++;
		}
	}
	printf ("%d valores pares\n", cont);
    return 0;
}