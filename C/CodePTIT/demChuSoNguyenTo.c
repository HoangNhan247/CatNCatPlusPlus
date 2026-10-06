#include <stdio.h>
#include <math.h>

int nguyenTo(int i){
    for (int v = 2; v <= sqrt(i); v++){
        if (i % v == 0) return 0;
    }
    return 1;
}

int main()
{
    int a, b[10], c;
    scanf("%d", &a);

    for (int i = 0; i < 10; i++){
        b[i] = 0;
    }

    while (a > 0){
        c = a % 10;
        a /= 10;
        if (c > 1 && nguyenTo(c)){
            b[c]++;
        }
    }

    for (int i = 0; i <= 10; i++){
        if (b[i] > 0){
            printf("%d %d\n", i, b[i]);
        }
    }

    return 0;
}