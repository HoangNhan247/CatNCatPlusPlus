#include <stdio.h>

int main()
{
  long a, b = 1;
  scanf("%ld", &a);

  for (long v = 0; v < a; v++){
    for (long i = 0; i <= v; i++){
      printf(" %ld ", b);
      b++;
    }
    printf("\n");
  }
  return 0;
}