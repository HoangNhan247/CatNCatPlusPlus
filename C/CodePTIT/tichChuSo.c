#include <stdio.h>
int main()
{
  long long n, a, b;
  scanf("%lld", &n);
  b = n%10;
  n = n/10;

  while (n > 0){
    a = n % 10;
    n = n / 10;
    b = b * a;
  }
  printf("%lld",b);
  return 0;
}