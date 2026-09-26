#include <stdio.h>
int cmp(int a, int b, int c){
  if (c == 0)
    if (a > b) return a; else return b;
  else
    if (a < b) return a; else return b;
}

int main()
{
  int a, b, c, d, e, f, g, h;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  e = cmp(a, c, 0);
  f = cmp(b, d, 0);
  g = cmp(a, c, 1);
  h = cmp(b, d, 1);
  scanf("%d %d %d %d", &a, &b, &c, &d);
  e = cmp(e, cmp(a, c, 0), 0);
  f = cmp(f, cmp(b, d, 0), 0);
  g = cmp(g, cmp(a, c, 1), 1);
  h = cmp(h, cmp(b, d, 1), 1);
  a = cmp((e-g), (f-h), 0);
  printf("%d", a*a);
  return 0;
}