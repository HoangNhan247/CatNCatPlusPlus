#include <stdio.h>
#include <string.h>

int main()
{
  char a[22];
  long long b = 0, c = 0, d = 0, e = 0, f = 0;
  for (int i = 0; i < sizeof(a); i++){
    a[i] = '0';
  }

  fgets(a, sizeof(a), stdin);
  for (b; b < 19; b++){
    c = a[b] - '0';
    if (c >= 0) {
      if (d == 0) {
        if (e == 0 && c == 0) {
          d = 1;
        } else {
          printf("Bef: %lld %d\n", e, c);
          e = e * 10 + c;
          printf("Af:%lld\n\n", e);
        }
      }
    } else {
      if (e > f)
        f = e;
      e = 0;
      d = 0;
    }
  }

  for (int i = 0; i < sizeof(a); i++){
    a[i] = '0';
  }

  e = 0;
  d = 0;
  fgets(a, sizeof(a), stdin);
  for (b; b < 19; b++){
    c = a[b] - '0';
    if (c >= 0) {
      if (d == 0) {
        if (e == 0 && c == 0) {
          d = 1;
        } else {
          printf("Bef: %lld %d\n", e, c);
          e = e * 10 + c;
          printf("Af:%lld\n\n", e);
        }
      }
    } else {
      if (e > f)
        f = e;
      e = 0;
      d = 0;
    }
  }

  printf("%lld\n", f);
  return 0;
}