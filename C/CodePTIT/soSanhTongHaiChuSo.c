#include <stdio.h>

int tongChuSo(int i){
  int v = 0;
  while (i > 0){
    v += i % 10;
    i = i / 10;
  }
  return v;
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  if (tongChuSo(a) > tongChuSo(b)){
    int c = a;
    a = b;
    b = c;
  }

  printf("%d %d", a, b);
  return 0;
}