#include <stdio.h>

int nguyenTo(long long a){
  if (a > 1){
    for (long long i = 2; i < a;i++){
      if (a % i == 0){
        return 1;
      }
    }
  } else { return 1; }
  return 0;
}

int main()
{
  long long a, b, c = 0, d;
  scanf("%lld %lld", &a, &b);

  if (a >= 1 && b >= a){
    long long isPrime[b + 1];
    for (long long i = a; i <= b; i++){
      isPrime[i] = 1;
    }

    for (a; a <= b; a++){
      if (isPrime[a] == 1 && nguyenTo(a) == 0){
        c += a;
        isPrime[a] = 0;

        d = 2;
        while(a*d <= b){
          long long i = a*d;
          if (isPrime[i] == 1){
            isPrime[i] = 0;
          }
          d++;
        }
      }
    }
    printf("%lld", c);
  }
  return 0;
}