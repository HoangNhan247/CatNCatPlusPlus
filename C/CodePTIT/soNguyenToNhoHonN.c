#include <stdio.h>

int main() {
  long long a, b;
  scanf("%lld", &a);
  for (long long i = 2; i < a; i++){
    b = 1;
    for (long long v = 2; v*v <= i; v++){
      if (i%v==0){
        b = 0;
        break;
      }
    }
    if (b){
      printf("%lld\n", i);
    }
  }
  return 0;
}