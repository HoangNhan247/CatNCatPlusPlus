#include <stdio.h>
int main()
{
  int a, b, c, d;
  scanf("%d", &a);
  while (a--){
    c = 0;
    scanf("%d", &b);
    
    for (int d = 2; d <= b;){
      if (b % d == 0){
        c++;
      }
      d += 2;
    }
    printf("%d\n", c);
  }

  return 0;
}