#include <stdio.h>

int record[100];
int fibonacci(int v){
  if (v == 0 || v == 1){
    return v;
  }

  if (record[v] == 0){
    record[v] = fibonacci(v - 1) + fibonacci(v - 2);
  }

  return record[v];
}

int main()
{
  int a;
  scanf("%d", &a);

  for (int i = 0; i <= a; i++){
    record[i] = 0;
  }

  printf("%d\n", fibonacci(a));
  return 0;
}