#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        b = i;
        while (b--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}