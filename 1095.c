#include <stdio.h>

int main() {
    int a[10001]={}, n, k, low, i=0;
    scanf("%d", &n);
    scanf("%d", &k);
    a[1] = k; low = k;
    for(i=2; i<=n; i++) {
        scanf("%d", &k);
        a[i] = k;
        if(k<low) low = k;
    }
    printf("%d", low);

    return 0;
}