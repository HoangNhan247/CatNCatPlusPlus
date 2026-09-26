#include <stdio.h>
int main()
{
  int a, b, c = 0, d = 0;
  scanf("%d", &a);
  while (a > 0){
    b = a % 10;
    a /= 10;
    if (b != 0){
      if (b % 2 == 0){
        d++;
      } else {
        c++;
      }
    }
  }

  printf("%d %d", c, d);
  return 0;
}