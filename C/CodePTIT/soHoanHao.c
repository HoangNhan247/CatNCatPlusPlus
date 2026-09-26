#include <stdio.h>
int main()
{
  long long a, b = 0, c = 1;
  scanf("%lld", &a);
  while (c < a){
    if (a % c == 0){
      b += c;
    }
    c++;
    if (b > a){
      break;
    }
  }
  if (b != a)
    printf("0");
  else
    printf("1");
}