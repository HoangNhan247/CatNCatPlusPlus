#include <stdio.h>
int main()
{
  int a, b;
  scanf("%d", &a);
  if (a > 9){
    b = a % 10;
    a = a / 10;
    
  } else {
    printf("%d", a);
  }
  return 0;
}