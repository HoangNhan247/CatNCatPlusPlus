#include <stdio.h>
int main() {
  int a, b;
  if (b==0){
    printf("0");
  } else {
  scanf("%d %d", &a, &b);
  printf("%d\n%d\n%d\n%d\n%d\n%.2f", a+b, a-b, a*b, a/b, a%b, (float)a/b);
  }
  return 0;
}