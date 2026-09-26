#include <stdio.h>
int main()
{
  long a, b;
  scanf("%ld", &a);
  for (long i = 1; i <= a; i++){
    b = (i%2==0) ? 2 : 1 ;
    for (long v = 1; v <= i; v++){
      printf("%ld", b);
      b += 2;
    }
    printf("\n");
  }
}