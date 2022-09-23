#include <stdio.h>

int main() {
    int a[24]={}, i=0, t, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%d", &t);
        ++a[t];
    }

    for(i=1; i<24; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}