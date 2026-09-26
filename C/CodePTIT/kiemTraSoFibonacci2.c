#include <stdio.h>
long long record[100];
long long fibonacci(long long v){
  if (v == 0 || v == 1){
    return v;
  }
  if (record[v] == 0){
    record[v] = fibonacci(v - 1) + fibonacci(v - 2);
  }
  return record[v];
}

int main()
{
  long long n, a, b;
  for (long long i = 0; i < 100; i++){
    record[i] = 0;
  }
  record[1] = 1;
  scanf("%lld", &n);
  while (n--){
    scanf("%lld", &a);
    for (long long c = 1; c <= a; c++){
      b = fibonacci(c);
      if (b >= a) {break;}
    if (b == a){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}