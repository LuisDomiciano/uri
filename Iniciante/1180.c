#include <stdio.h>

int main (void)
{
	int N = 0, pos = 0, menor = 0;
	register int i = 0;
	
	scanf ("%d", &N);
	
	int V [N];
	
	menor = V[0];
	for ( i = 0; i < N; i++)
	{
		scanf ("%d", &V[i]);
		if (V[i] < menor)
		{
			menor = V[i];
			pos = i;
		}
	}
	
	printf ("Menor valor: %d\nPosicao: %d\n", menor, pos);
	
	return 0;
}