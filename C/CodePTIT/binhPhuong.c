#include <stdio.h>
int main() {
  long long a, b;
  scanf("%lld", &a);
  for (a; a>0; a--) {
    scanf("%lld", &b);
    printf("%lld\n", b*2);
  }
  return 0;
}