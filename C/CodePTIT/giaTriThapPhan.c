#include <stdio.h>
int main() {
  int a, b; double b;
  scanf("%d", &a);
  for (a; a>0; a--) {
    scanf("%lf", &b);
    printf("%.15lf\n", 1/b);
  }
  return 0;
}