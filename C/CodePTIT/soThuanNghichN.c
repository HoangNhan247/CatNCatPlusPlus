#include <stdio.h>

int thuanNghich(int i){
  int v = i, f = 0;
  while (v > 0){
    if (v % 10 == 9){
      return 0;
    }
    f = (f * 10) + (v % 10);
    v = v / 10;
  }
  return f == i;
}

int main() {
  int a, b = 0;
  scanf("%d", &a);
  for (int h = 2; h < a; h++){
    if (h == 2){
      printf("2");
      b++;
      continue;
    }
    if (thuanNghich(h)){
      printf(" %d", h);
      b++;
    }
  }
  printf("\n%d", b);
  return 0;
}