#include <stdio.h>
int main()
{
  int a, b;
  scanf("%d", &a);
  b = (a > 9) ? a % 10 : a;
  while (a / 10 > 0){
    a = a / 10;
  }
  printf("%d %d", a, b);
  return 0;
}