#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  for (int i = a-1; i >= 0; i--) {
    for (int b = a + i; b > 0; b--){
      if (b <= a){
        if (i == 0 || i == a - 1 || b == 1 || b == a){
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