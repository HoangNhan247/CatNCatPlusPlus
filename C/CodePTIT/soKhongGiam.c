#include <stdio.h>

int main()
{
  long long a, b, c, d, e;
  scanf("%lld", &a);
  while (a--){
    scanf("%lld", &b);
    e = 0;
    while (b / 10 > 0){
      c = b % 10;
      b = b / 10;
      d = b % 10;
      if (c < d){
        e = 1;
        break;
      }
    }
    if ( e == 0 && (b == 0 || b <= d) )
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}