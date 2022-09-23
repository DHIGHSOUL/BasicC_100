#include <stdio.h>

int main() {
    int a[10001]={}, i=0, t, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%d", &t);
        a[i] = t;
    }

    for(i=n; i>=1; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}