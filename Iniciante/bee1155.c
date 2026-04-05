#include<stdio.h>

int main()
{
    int n = 100;
    float sum = 0;
    
    while (n > 0) {
        sum += (float) 1/n;
        n--;
    }

    printf("%.2f\n", sum);
    return 0;
}

