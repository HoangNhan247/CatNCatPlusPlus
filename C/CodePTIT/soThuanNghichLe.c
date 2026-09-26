#include <stdio.h>

int main() {
  long long a, b, c, d, e, f;
  scanf("%lld", &a);
  while (a--){
    scanf("%lld", &d);
    b = d, c = 0, e = 0;
    while (b > 0){
      f = b % 10;
      if ( f % 2 == 0 && f != 1 ){
        b = 0, e = 0;
      } else {
        c = (c * 10) + f;
        e += f;
        b = b / 10;
      }
    }

    if (d == c && e % 2 != 0){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}