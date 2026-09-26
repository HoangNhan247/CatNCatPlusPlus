#include <stdio.h>

int main()
{
  int a, b, c, d;
  scanf("%d", &a);

  while (a--){
    scanf("%d %d", &b, &c);
    if (b > c){
      for (int i = b; i >= 1 ; i--){
        if (b % i == 0 && c % i == 0){
          d = i;
          break;
        }
      }
    } else {
      if (c > b){
        for (int i = c; i >= 1 ; i--){
          if (b % i == 0 && c % i == 0){
            d = i;
            break;
          }
        }
      } else {
        d = b;
      }
    }

    printf("%d\n", d);
  }

  return 0;
}