#include <stdio.h>
int main()
{
  long a, b, c, d;
  scanf("%ld", &a);
  b = a/365;
  c = (a-b*365)/7;
  d = a-b*365-c*7;
  printf("%ld %ld %ld", b, c, d);
}