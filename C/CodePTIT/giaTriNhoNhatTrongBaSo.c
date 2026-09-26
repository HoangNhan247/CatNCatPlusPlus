#include <stdio.h>

int main()
{
  long long a, b;
  scanf("%lld", &a);
  for (long long i = 0; i < 2; i++){
    scanf("%lld", &b);
    if (a > b) a = b;
  }
  printf("%lld", a);
  return 0;
}