#include <stdio.h>

int main()
{
  long a, b = 1, c;
  scanf("%ld", &a);
  for (long i = 0; i < a; i++){
    c = 1;
    for (long v = b; v > 0; v--){
      if (v == 1 || v == b){
        printf("1");
      } else {
        if (v > b/2){
          c += 2;
          printf("%ld", c);
        } else {
          c -= 2;
          printf("%ld", c);
        }
      }
    }
    b += 2;
    printf("\n");
  }
  return 0;
}