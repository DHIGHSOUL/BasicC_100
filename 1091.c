#include <stdio.h>

int main() {
    int a, m, d, n, i=1;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    long long int result = a;
    while(1) {
        if(i++==n) {
            printf("%lld", result);
            break;
        }
        result = result*m+d;
    }

    return 0;
}