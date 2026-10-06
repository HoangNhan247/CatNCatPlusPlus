#include <stdio.h>
#include <math.h>

int nguyenTo(long long i){
    for (long long v = 2; v <= sqrt(i); v++){
        if (i % v == 0) return 0;
    }
    return 1;
}

int main()
{
    long long a, b = 2;
    scanf("%lld", &a);
    while (a > 0){
        if (nguyenTo(b)){
            printf("%lld\n", b);
            a--;
        }
        b++;
    }
    return 0;
}