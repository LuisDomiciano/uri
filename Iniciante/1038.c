#include <stdio.h>
 
int main() {
 
    int cod = 0, qtd = 0;
    float tot = 0;
    scanf ("%d %d", &cod, &qtd);
    
    switch (cod)
    {
        case 1:
            tot = qtd * 4.00;
        break;
        case 2:
            tot = qtd * 4.50;
        break;
        case 3:
            tot = qtd * 5.00;
        break;
        case 4:
            tot = qtd * 2.00;
        break;
        case 5:
            tot = qtd * 1.50;
        break;
    }
    printf ("Total: R$ %.2f\n", tot);
 
    return 0;
}