#include <stdio.h>

int main()
{
  int a, b, c, d;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= a; i++) {
    printf("%d", i);
    c = i + 1;
    d = b - 1;
    while (d--) {
      if (c <= b) {
        printf("%d", c);
        c++;
      } else {
        printf("%d", b+1-(b-d));
      }
    }
    printf("\n");
  }
  return 0;
}