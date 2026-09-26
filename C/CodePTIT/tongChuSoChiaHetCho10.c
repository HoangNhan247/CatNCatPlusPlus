#include <stdio.h>

int main()
{
  long long n, a, b, c = 0;
  scanf("%lld", &b);
  while (b--){
    scanf("%lld", &n);
    c = 0;
    while (n > 0){
      a = n % 10;
      n = n / 10;
      c += a;
    }
    if (c % 10 == 0)
      printf("YES\n");
    else
      printf("NO\n");
    }
  return 0;
}