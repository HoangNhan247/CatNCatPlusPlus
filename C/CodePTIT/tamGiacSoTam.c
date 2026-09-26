#include <stdio.h>

int main()
{
  long a, b = 1, c = 1, d;
  scanf("%ld", &a);
  for (long i = 0; i < a; i++){
    d = c;

    if (i % 2 != 0 && i != 0){
      d += i;
      for (int v = 0; v < b; v++){
        if (v == 0 || v % 2 == 0){
          printf("%ld", d);
          d--;
          c++;
        } else {
          printf(" ");
        }
      }
    } else {
      for (int v = 0; v < b; v++){
        if (v == 0 || v % 2 == 0){
          printf("%ld", d);
          d++;
          c++;
        } else {
          printf(" ");
        }
      }
    }

    b += 2;
    printf("\n");
  }
  return 0;
}