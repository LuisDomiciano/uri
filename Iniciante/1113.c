#include <stdio.h>

int main (void)
{
	int x = 0, y = 0;
	
	do {
		scanf ("%d %d", &x, &y);
		if ( x < y ){
			printf ("Crescente\n");
		} else if (x > y){
			printf ("Decrescente\n");
		}
	} while ( x!= y);
	
	return 0;
}