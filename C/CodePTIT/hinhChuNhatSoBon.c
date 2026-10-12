#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);

    d = (a >= b) ? a : b;
    for (int i = a; i > 0; i--){
        c = -1, e = d;
        for (int v = 0; v < b; v++){
            printf("%d", e);
            if (e == 1){
                c = 1;
            }

            e += c;
        }
        printf("\n");
        d--;
    }

    return 0;
}