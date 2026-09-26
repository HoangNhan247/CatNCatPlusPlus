#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= b; i++){
    printf("*");
    c = a - 2;
    if (i == 1 || i == b){
      while (c--){
        printf("*");
      }
    } else {
      while (c--){
        printf(" ");
      }
    }
    printf("*\n");
  }
  return 0;
}