#include <stdio.h>

int main() {
  int a, d;
  scanf("%d", &a);

  for (int b = 1; b < a*2; b++){
    d = a;
    for (int c = 1; c < a*2; c++){
        if (b < a){
            if (b == 1 || c == 1 || c == a*2-1){
                printf("%d", a);
            } else {
                if (c < a+1 && d - 1 >= a+1-b){
                    d--;
                } else {
                    if (c > a+1 && d + 1 < a){
                        d++;
                    }
                }
                printf("%d", d);
            }
        } else {


            if (b > a){
                if (b == a*2-1 || c == a*2-1 || c == 1){
                    printf("%d", a);
                } else {
                    if (c < a+1 && d - 1 >= b-a+1 ){
                        d--;
                    } else {
                        if (c > a+1 && d + 1 < a){
                            d++;
                        }
                    }
                    printf("%d", d);
                }


            } else {
                if (c == a*2-1 || c == 1){
                    printf("%d", a);
                } else {
                    if (c <= a){
                        d--;
                    } else {
                        d++;
                    }
                    printf("%d", d);
                }
            }
        }
    }
      printf("\n");
  }

  return 0;
}