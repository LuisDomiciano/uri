#include <stdio.h>
#include <conio.h>

int main (void)
{
    int N = 0, i = 0;
    float n1 =0, n2 =0, n3 =0, media = 0;

    scanf ("%d", &N);

    for (i = 0; i < N; i++)
    {   fflush (stdin);
        scanf ("%f %f %f", &n1, &n2, &n3);
        printf ("%.1f\n", ( (n1*2+n2*3+n3*5)/(2+3+5) ));
    }

    getch();
    return 0;
}