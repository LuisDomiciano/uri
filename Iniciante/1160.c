#include <stdio.h>

int main (void)
{
	int N = 0, anos = 0, pa = 0, pb = 0;
	float g1 = 0, g2 = 0;
	register int i = 0;
	scanf ("%d", &N);
	for ( i = 0; i < N; i++)
	{
		anos = pa = pb = g1 = g2 = 0;
		scanf ("%d %d %f %f", &pa, &pb, &g1, &g2);
		while (pb > pa) {
			pa = (int)(pa + (pa * g1)/100);
			pb = (int)(pb + (pb * g2)/100);
			anos++;
		}
		if ( anos <= 100)
		{
			printf ("%d anos.\n", anos);
		} else {
		printf ("Mais de 1 seculo.\n");
		}
		anos = 0;
	}
	return 0;
}