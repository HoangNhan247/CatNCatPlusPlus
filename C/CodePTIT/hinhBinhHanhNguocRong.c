#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i < a; i++) {
    for (int c = (b+i); c > 0; c--){
      if (c <= b){
        if (c == 1 || c == b || i == 0 || i == a-1){
          printf("*");
        } else {
          printf(".");
        }
      } else {
        printf("~");
      }
    }
    printf("\n");
  }

  return 0;
}