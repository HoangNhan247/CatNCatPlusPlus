#include <stdio.h>

int main()
{
  long a, b = 2, c, d;
  scanf("%ld", &a);
  d = a;
  for (long i = 0; i < a; i++){
    d -= 1;
    c = 2;

    for (long v = b + d; v > 1; v--){
      if (v > b){
        printf("~");
      } else {
        if (v == 0 || v == b){
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
    }

    b += 2;
    printf("\n");
  }
  return 0;
}