#include <stdio.h>

int main (void)
{
	int senha = 0;
	
	do {
		senha = 0;
		scanf ("%d", &senha);
		if ( senha != 2002 )
		{
			printf ("Senha Invalida\n");
		} else if ( senha == 2002)
		{
			printf ("Acesso Permitido\n");
			return 0;
		}
	} while (senha != 2002);
	
	return 0;
}