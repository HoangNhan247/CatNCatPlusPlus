#include <stdio.h>
int main()
{
  long a, b;
  scanf("%ld", &a);
  for (long i = 0; i < a; i++){
    b = 1;
    for (long v = 1+2*i; v > 0; v--){
      printf("%ld", b);
      b++;
    }
    printf("\n");
  }
}