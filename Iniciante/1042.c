#include <stdio.h>
#include <conio.h>

int main (void)
{
	int a = 0, b = 0, c = 0;
	
	scanf ("%d %d %d", &a, &b, &c);
	
	if ( a < b && a < c && b < c)
	{
		printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, a, b, c);
	}
	if ( a < b && a < c && c < b)
	{
		printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, c, b, a, b, c);
	}
	if ( b < a && b < c && a < c)
	{
		printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, a, c, a, b, c);
	}
	if ( b < a && b < c && c < a)
	{
		printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", b, c, a, a, b, c);
	}
	if ( c < a && c < b && a < b)
	{
		printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, a, b, a, b, c);
	}
	if ( c < a && c < b && b < a)
	{
		printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b, a, a, b, c);
	}
	
	getch();
	return 0;
}

/*
	a, b, c
	a, c, b
	b, a, c
	b, c, a
	c, a, b
	c, b, c

*/