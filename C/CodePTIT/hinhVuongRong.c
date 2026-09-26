#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++){
    if (i == 1 || i == a){
      b = a;
      while (b--){
        printf("*");
      }
    } else {
      b = a - 2;
      printf("*");
      while (b--){
        printf(".");
      }
      printf("*");
    }
    printf("\n");
  }
  return 0;
}