#include <stdio.h>
int main() {
  int a, b;
  scanf("%d", &a);
  for (a; a>0; a--) {
    scanf("%d", &b);
    printf("%d\n", b*2);
  }
  return 0;
}