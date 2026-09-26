#include <stdio.h>

int main()
{
  long long a, b, c = 0, d;
  scanf("%lld", &a);
  b = a;
  while (b > 0){
    d = 1;
    for (long long i = b % 10; i >= 1; i--){
      d = d * i;
    }
    b = b / 10;
    c += d;
  }
  printf("%d", c == a);

  return 0;
}