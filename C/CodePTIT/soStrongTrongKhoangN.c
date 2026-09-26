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
  long long a;
  scanf("%lld", &a);
  for (long long i = 1; i <= a; i++){
    if (strong(i)){
      if (i == 1){
        printf("1");
      } else {
        printf(" %lld", i);
      }
    }
  }

  return 0;
}