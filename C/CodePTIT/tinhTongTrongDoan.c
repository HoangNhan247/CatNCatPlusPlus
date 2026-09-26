#include <stdio.h>
int main()
{
  long long a, b, n = 0;
  scanf("%lld %lld", &a, &b);
  if (a > b)
    for (a; a >= b; a--)
      n += a;
  else
    for (a; a <= b; a++)
      n += a;
  printf("%lld", n);
  return 0;
}