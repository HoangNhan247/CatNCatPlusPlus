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
    long a, b;
    scanf("%ld", &a);

    for (long v = 0; v < 94; v++){
        c[v] = 0;
    }

    while(a--){
        scanf("%ld", &b);
        printf("%ld\n", fibonacci(b));
    }

    return 0;
}