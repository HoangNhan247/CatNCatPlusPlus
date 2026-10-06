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
    long a, b, c, d;
    scanf("%ld", &a);

    while (a--){
        scanf("%ld", &b);
        c = 0;
        while (b > 0){
            d = 0;

            for (int i = 2; i <= b; i++){
                if (nguyenTo(i) && b % i == 0){
                    b /= i;
                    d = 1;
                    if (c){
                        printf(" %ld", i);
                    } else {
                        printf("%ld", i);
                        c = 1;
                    }

                    break;
                }
            }

            if (!d) break;
        }

        printf("\n");
    }

    return 0;
}