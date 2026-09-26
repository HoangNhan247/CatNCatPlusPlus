#include <stdio.h>
int main()
{
  long long n, a, b = 0, c, d;
  scanf("%lld", &b);
  while (b--){
    scanf("%lld", &n);
    a = 0; c = n % 10; d = c;
    while (n > 0){
      a = n % 10;
      n = n / 10;
      if (a > c)
        c = a;
      if (a < d)
        d = a;
    }
    printf("%lld %lld\n", c, d);
  }
  return 0;
}