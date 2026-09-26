#include <stdio.h>

int main()
{
  long long a, b[10], c;
  scanf("%lld", &a);
  for (int i = 1; i < 10; i++){
    if (i == 2 || i == 3 || i == 5 || i == 7 || i == 9){
      b[i] = 0;
    } else {
      b[i] = -1;
    }
  }
  while(a > 0){
    c = a%10;
    a = a / 10;
    if (b[c] != -1){
      b[c] += 1;
    }
  }
  for (long long i = 1; i < 10; i++){
    if (b[i] > 0){
      printf("%lld %lld\n", i, b[i]);
    }
  }

  return 0;
}