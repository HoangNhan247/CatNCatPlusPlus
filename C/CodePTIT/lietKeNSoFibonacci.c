#include <stdio.h>

long long fibonacci(long long v){
  if (v == 0 || v == 1){
    return v;
  }

  return fibonacci(v - 1) + fibonacci(v - 2);
}

int main()
{
  long long n;
  scanf("%lld", &n);

  printf("0");
  for (long long i = 1; i < n; i++){
    printf(" %lld", fibonacci(i));
  }

  return 0;
}