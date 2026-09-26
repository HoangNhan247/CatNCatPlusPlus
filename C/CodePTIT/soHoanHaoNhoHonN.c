#include <stdio.h>
int perfect(int v){
  int f = 0;
  for (int i = v-1; i > 0; i--){
    if (v % i == 0){
      f += i;
    }
    if (f > v){
      break;
    }
  }
  return f == v;
}

int main()
{
  int a, b = 1;
  scanf("%d", &a);
  for (int g = 1; g < a; g++){
    if (perfect(g)){
      if (b){
        printf("%d", g);
        b = 0;
      } else {
        printf(" %d", g);
      }
    }
  }
}