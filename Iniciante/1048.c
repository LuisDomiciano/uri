#include <stdio.h>
 
int main() {
 
  	float sal = 0;
	int perc = 0;
	scanf ("%f", &sal);
	if ( sal > 0 && sal <= 400.00)
	{
		perc = 15;
	} 
	if ( sal > 400.00 && sal <= 800.00)
	{
		perc = 12;
	}
	if ( sal > 800.00 && sal <= 1200.00)
	{
		perc = 10;
	}
	if ( sal > 1200.00 && sal <= 2000.00)
	{
		perc = 7;
	}
	if ( sal > 2000.00)
	{
		perc = 4;
	}

	printf ("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal+((sal*perc)/100), (sal * perc)/100, perc);
 
    return 0;
}