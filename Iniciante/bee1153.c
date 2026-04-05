#include<stdio.h>

int main()
{
    int n = 0, fat = 1;
    
    scanf("%d", &n);
    while (n > 0) 
    {
        fat *= n;
        n--;
    }
    printf("%d\n", fat);
    return 0;
}

