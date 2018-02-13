#include <stdio.h>
#include <string.h>
#define LIMPABUFFER();system("cls");

int main (void)
{
	int n1 = 0, n2 = 0, sm = 0, N = 0;
	char jog1 [100], jog2 [100], esc1 [10], esc2 [10];
	register int i = 0;
	
	scanf ("%d", &N);
	for ( i = 0; i < N; i++ )
	{	
		scanf ("%s %s %s %s", &jog1, &esc1, &jog2, &esc2);
		scanf ("%d %d", &n1, &n2);
		sm = n1 + n2;
		if ( sm % 2 == 0)
		{
			if ( strcmp (esc1, "PAR") == 0 )
			{
				printf ("%s\n",jog1);
			} else if ( strcmp(esc2, "PAR") == 0)
			{
				printf ("%s\n", jog2);
			}
		} else {
			if ( strcmp (esc1, "IMPAR") == 0 )
			{
				printf ("%s\n",jog1);
			} else if ( strcmp(esc2, "IMPAR") == 0)
			{
				printf ("%s\n", jog2);
			}
		}
		n1 = n2 = sm = 0;
	}
	return 0;
}