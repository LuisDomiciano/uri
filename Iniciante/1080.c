#include <stdio.h>
#include <conio.h>

int main (void)
{
    
    int V [100], i = 0, maior = 0, pos = 0;

    for (i = 0; i <100; i++)
    {
        fflush (stdin);
        scanf ("%d", (V+i));
        if ( *(V+i) > maior)
        {
            maior = *(V+i);
            pos = i;
        }
    }
    printf ("%d\n%d\n", maior, pos+1);
    getch();
    return 0;
}