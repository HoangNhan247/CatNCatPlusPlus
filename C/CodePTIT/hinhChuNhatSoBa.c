#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++){
        c = -1, d = i;
        for (int v = 0; v < b; v++){
            printf("%d", d);
            if (d == 1){
                c = 1;
            }

            d += c;
        }
        printf("\n");
    }

    return 0;
}