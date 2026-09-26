#include <stdio.h>
int main()
{
  long long a, b, c;
  scanf("%lld", &a);
  b = (a > 1) ? 0 : 1;
  for (long long i = 1; i <= a; i++){
    c = 1;
    for (long long v = i; v > 1 ; v--){
      c *= v;
    }
    b += c;
  }
  printf("%lld", b);
}