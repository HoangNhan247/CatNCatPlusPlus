#include <stdio.h>
int main()
{
  long long a, b = 0;
  scanf("%lld", &a);

  while (a > 0){
    a = a / 10;
    b += 1;
  }

  printf("%lld\n", b);
}