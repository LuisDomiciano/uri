#include <stdio.h>
 
int main() {
 
   float a = 0, b = 0, c = 0;
    scanf ("%f %f %f", &a, &b, &c);
    if ( a < b + c && b < c + a && c < a + b){
        printf ("Perimetro = %.1f\n", a+b+c);
    } else {
        printf ("Area = %.1f\n", ((a+b)*c)/2);
    }
 
    return 0;
}