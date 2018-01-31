#include <stdio.h>
 
int main() {
 
   	float n;
	int  i = 0, pos = 0;
	for ( i = 0; i < 6; i++)
	{
		n = 0;
		scanf ("%f", &n);
		if ( n > 0)
		{
			pos++;
		}
	}
	printf ("%d valores positivos\n", pos);
 
    return 0;
}