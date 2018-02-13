#include <stdio.h>

int main (void)
{
    int n = 0, cont = 0;
    float md = 0;
    do {
        scanf ("%d", &n);
        if ( n > 0 )
        {
            md += n;
            cont++;
        }
    } while ( n > 0);

    printf ("%.2f\n", md/cont);
    return 0;
}