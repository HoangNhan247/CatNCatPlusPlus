#include <stdio.h>

int strong(long long v){
  long long f = v, g = 1, h = 0;
  while (f > 0){
    g = 1;
    for (long long i = f % 10; i >= 1; i--){
      g = g * i;
    }
    f = f / 10;
    h += g;
  }
  return h == v;
}

int main()
{
  long long a, b, c = 0;
  scanf("%lld %lld", &a, &b);
  if (a > b){
    for (long long i = b; i <= a; i++){
      if (strong(i)){
        if (c == 0){
          printf("%lld", i);
          c++;
        } else {
          printf(" %lld", i);
        }
      }
    }
  } else {
    if (b > a){
      for (long long i = a; i <= b; i++){
        if (strong(i)){
          if (c == 0){
            printf("%lld", i);
            c++;
          } else {
            printf(" %lld", i);
          }
        }
      }
    } else {
      if (strong(a)){
        printf("%lld", a);
      }
    }
  }

  return 0;
}