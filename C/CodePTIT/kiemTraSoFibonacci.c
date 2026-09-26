#include <stdio.h>

long long fibonacci(long long v){
  if (v == 0 || v == 1){
    return v;
  }

  return fibonacci(v - 1) + fibonacci(v - 2);
}

int main()
{
  long long n, a = 0, b;
  scanf("%lld", &n);

  if (n == 1){
    printf("1");
    return 0;
  }
  
  while (a <= n){
    b = fibonacci(a);
    if (b >= n){
      break;
    }
    a++;
  }

  if (b == n)
    printf("1");
  else
    printf("0");

  return 0;
}