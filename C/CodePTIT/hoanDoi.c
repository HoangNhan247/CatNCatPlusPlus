#include <stdio.h>

void hoanDoi(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int c[2] = {4, 6};
  hoanDoi(c, c+1);

  printf("1: %d\n2: %d\n", c[0], c[1]);
  return 0;
}