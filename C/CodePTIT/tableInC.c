#include <stdio.h>

int main() {
  long int a, b, max, min;
  scanf("%ld", &a);

  long int c[a+1];

  for (long int i = 0; i<a; i++){
    scanf("%ld", &c[i]);
  }

  max = c[0];
  min = c[0];

  for (long int i = 0; i<a; i++){
    if (max < c[i]){
      max = c[i];
    }

    if (min > c[i]){
      min = c[i];
    }
  }

  printf("%ld %ld", min, max);

  return 0;
}