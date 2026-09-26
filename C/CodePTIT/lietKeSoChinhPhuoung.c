#include <stdio.h>
#include <math.h>
int main()
{
  long long a, b, c = 0;
  float d;
  scanf("%lld %lld", &a, &b);
  long long r[1000];
  for (a; a <= b; a++){
    if (a > 0){
      d = sqrt(a);
      if (d*d == a){
        r[c] = a;
        c++;
      }
    }
  }

  printf("%lld", c);
  for (long long i = 0; i < c; i++){
    printf("\n\n%lld", r[i]);
  }
  return 0;
}