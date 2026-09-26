#include <stdio.h>

int main() {
  long long a, b, c, d;
  scanf("%lld", &a);
  while (a--){
    scanf("%lld", &d);
    b = d, c = 0;
    while (b > 0){
      c = (c * 10) + (b % 10);
      b = b / 10;
    }
    if (d == c){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}