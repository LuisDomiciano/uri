#include <stdio.h>
#include <string.h>
#define N 12
#define LIMPABUFFER();fflush(stdin);
int main (void)
{
	int L = 0, cont = 0;
	register int i = 0, j = 0;
	float sm = 0, M[N][N];
	char c[2];
	
	scanf ("%d", &L);
	scanf ("%s", &c);	
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{	LIMPABUFFER();
			scanf ("%f", &M[i][j]);
		}
	}
	sm = 0;
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{
			if ( i == L )
			{
				sm += M[i][j];
				cont++;
			}
		}
	}
	if ( strcmp (c, "S") == 0 ){
		printf ("%.1f\n", sm);
	} else if ( strcmp (c, "M") == 0 ){
		printf ("%.1f\n", sm/cont);
	}
	
	return 0;
}