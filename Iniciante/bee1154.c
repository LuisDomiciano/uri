#include<stdio.h>

int main()
{
    int n = 0, sum = 0, count = 0;
    float average = 0;
    
    while(1)
    {
        if (scanf("%d", &n) != 1)
            break;
        if (n <= 0)
            break;
        count++;
        sum += n;
    }
    
    if (count > 0)
    {
        average = (float) sum / count;
        printf("%.2f\n", average);
    }
    return 0;
}

