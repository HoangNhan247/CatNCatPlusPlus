#include <stdio.h>

int main()
{
  long long n, a, b = 0;
  scanf("%lld", &n);
  while (n > 0){
    a = n % 10;
    n = n / 10;
    b += a;
  }
  printf("%lld",b);
  return 0;
}