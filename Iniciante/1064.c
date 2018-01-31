#include <stdio.h>
 
int main() {
 
	int pos = 0, i = 0;
	float n = 0, sm = 0;
	for ( i = 0; i <6; i++)
	{
		scanf ("%f", &n);
		if ( n >= 0)
		{
			sm+=n;
			pos++;
		}
	}
	printf ("%d valores positivos\n%.1f\n", pos, sm/pos);

    return 0;
}