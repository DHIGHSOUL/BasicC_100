#include <stdio.h>

int main() {
    int a = 0, r = 0, n = 0, i = 1;
    scanf("%d %d %d", &a, &r, &n);
    long long int result = a;
    while(1) {
        if(i++==n) {
            printf("%lld", result);
            break;
        }
        result*=r;
    }

    return 0;
}