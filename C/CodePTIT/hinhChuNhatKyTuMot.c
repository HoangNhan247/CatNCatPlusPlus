#include <stdio.h>

int main()
{
    int a, b, d, e;
    scanf("%d %d", &a, &b);
    
    e = (a >= b) ? a-1 : b-1;
    char c = 'a' + e;

    for (int i = 0; i < a; i++){
        d = 0;

        for (int v = 0; v < b; v++){
            printf("%c", c - d);

            if (d < i && d < e){
                d++;
            }
        }

        printf("\n");
    }

    return 0;
}