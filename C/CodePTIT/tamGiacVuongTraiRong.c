#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int b = i; b > 0; b--){
            if (b == i || b == 1 || i == a){
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}