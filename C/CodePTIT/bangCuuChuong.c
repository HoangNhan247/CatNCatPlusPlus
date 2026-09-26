#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (1 <= a && a <= 9){
    printf("%d", a);
    for (int i = 2;i<11;i++){
      printf(" %d", a*i);
    }
  } else {
    printf("0");
  }
  return 0;
}