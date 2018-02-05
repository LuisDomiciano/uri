#include <stdio.h>
#include <conio.h>

int main (void)
{        
    float a, b;
    int N = 0, i = 0;

    scanf ("%d", &N);

    for ( i = 0; i < N; i++)
    {
        a = 0;
        b = 0;
        scanf ("%f", &a);
        scanf ("%f", &b);
    
        if ( b == 0 ){
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", (float)(a/b));
        }
    }

    getch();
    return 0;
  
}