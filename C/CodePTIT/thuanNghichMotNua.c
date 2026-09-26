#include <stdio.h>

int thuanNghich(long long i){
  long long v = i, f = 0;
  while (f < i){
    f = (f * 10) + (v % 10);
    v = v / 10;
  }
  return f == i;
}

int main() {
  long long a, b;
  scanf("%lld %lld", &a, &b);
  a = thuanNghich(a);
  b = thuanNghich(b);
  if ((a || b) && a != b){
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}