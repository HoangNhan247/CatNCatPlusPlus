#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d", &a);
  for (int i = a -1; i >= 0; i--) {
    b = i;
    while (b--) {
      printf("~");
    }
    b = a;
    while (b--) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}