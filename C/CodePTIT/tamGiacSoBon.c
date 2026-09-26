#include <stdio.h>

int main()
{
  long a, b = 1, c, d;
  scanf("%ld", &a);
  d = a;
  for (long i = 0; i < a; i++){
    d -= 1;
    c = 1;

    for (long v = 0 - d; v < b; v++){
      if (v < 0){
        printf("~");
      } else {
        if (v == 0 || v == b-1){
          printf("1");
        } else {
          if (v < b/2+1){
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