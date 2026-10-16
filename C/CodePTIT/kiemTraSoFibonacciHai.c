#include <stdio.h>

long long c[93];

long long fibonacci(long long v){
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
    long long a, b, d;
    scanf("%lld", &a);

    for (long long v = 0; v < 93; v++){
        c[v] = 0;
    }

    while(a--){
        scanf("%lld", &b);
        d = 0;

        for (int i = 0; i < 93; i++){
            if (fibonacci(i) == b){
                d = 1;
                break;
            } else {
                if (fibonacci(i) > b) break;
            }
        }

        if (d){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}