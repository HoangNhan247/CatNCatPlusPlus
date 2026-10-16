#include <stdio.h>

long c[93];

long fibonacci(long v){
    if (v == 0 || v == 1){
        return v;
    } else {
        if (c[v] > 0){
            return c[v];
        } else {
            c[v] = fibonacci(v - 1) + fibonacci(v - 2);
            return c[v];
        }
    }
}
int main()
{
    long a, b, d, e, f = 1;
    scanf("%ld", &a);

    for (long v = 0; v < 94; v++){
        c[v] = 0;
    }

    while(a--){

        if (!f){
            printf("\n");
        } else {
            f = 0;
        }

        e = 1;
        scanf("%ld %ld", &b, &d);
        for (long i = b; i <= d; i++){
            if (e){
                printf("%ld", fibonacci(i));
                e = 0;
            } else {
                printf(" %ld", fibonacci(i));
            }
        }
    }

    return 0;
}