#include <stdio.h>
#include <math.h>
int main()
{
  long long n, a, b = 0;
  scanf("%lld", &n);

  while (n--){
    scanf("%lld", &a);
    b = 0;
    for (long long i = 2; i <= sqrt(a); i++){
      if (a % i == 0){
        b = 1;
        break;
      }
    }
    if (b)
      printf("NO\n");
    else 
      printf("YES\n");
  }
  return 0;
}