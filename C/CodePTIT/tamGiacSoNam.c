#include <stdio.h>

int main()
{
  long a, b = 1, c;
  scanf("%ld", &a);
  for (long i = 0; i < a; i++){
    c = 2;
    for (long v = b; v > 0; v--){
      if (v == 1 || v == b){
        printf("2");
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