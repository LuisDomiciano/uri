#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 0, y = 0, sum = 0, min = 0, max = 0;
  
  scanf("%d%d", &x, &y);
  if ( x == y ) {
    printf("%d\n", sum);
    return 0;
  }

  if ( x < y ) {
    min = x;
    max = y;
  } else {
    min = y;
    max = x;
  }
  
  for (int i = min + 1; i < max; i++) {
    if (i % 2 != 0)
      sum+=i;
  }
  printf("%d\n", sum);
  
  return 0;
}