#include <stdio.h>

int main()
{
  long long n, a, b, c = 0;
  scanf("%lld", &b);
  while (b--){
    a = 0, c = 0;
    scanf("%lld", &n);
    while (n > 0){
      a = n % 10;
      n = n / 10;
      c += a;
    }
    printf("%lld\n", c);
  }
  return 0;
}