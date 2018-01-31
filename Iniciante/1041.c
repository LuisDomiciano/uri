#include <stdio.h>
 
int main() {
 
	float pX = 0, pY = 0;
	scanf ("%f", &pX);
	scanf ("%f", &pY);
	if ( pX == 0 && pY == 0.0)
	{
		printf ("Origem\n");
	}
	if ( pX > 0.0 && pY > 0.0)
	{
		printf ("Q1\n");
	}
	if ( pX > 0.0 && pY < 0.0)
	{
		printf ("Q4\n");
	}
	if ( pX < 0.0 && pY > 0.0)
	{
		printf ("Q2\n");
	}
	if ( pX < 0.0 && pY < 0.0)
	{
		printf ("Q3\n");
	}
	if ( (pX > 0.0 || pX < 0.0) && pY == 0.0)
	{
		printf ("Eixo X\n");
	}
	if ( pX == 0.0 && ( pY > 0.0 || pY < 0.0))
	{
		printf ("Eixo Y\n");
	}
 
    return 0;
}