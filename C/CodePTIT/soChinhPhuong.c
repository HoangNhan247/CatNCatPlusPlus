#include <stdio.h>
#include <math.h>
int main()
{
  int a, b;
  scanf("%d", &a);
  for (a; a > 0; a--){
    scanf("%d", &b);
    long long c = (int)sqrt(b);
    if (c*c == b){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}