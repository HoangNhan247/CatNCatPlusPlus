#include <stdio.h>

int main() {
  int a, b = 0, c, d, e;
  scanf("%d", &a);
  for (int i = 5; i < a; i++){
    c = i;
    d = 0;
    e = 1;
    while (c > 0){
      d = d + c % 10;
      c = c / 10;
    }
    if (d%5==0){
      for (int v = 2; v < i; v++){
        if (i%v==0){
          e = 0;
          break;
        }
      }
      if (e){
        if (b == 0){
          printf("%d ", i);
        } else {
          printf(" %d", i);
        }
        b++;
      }
    }
  }

  printf("\n%d", b);
  return 0;
}