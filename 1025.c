#include <stdio.h>

int main() {
    int i = 0, j = 10000;
    int a[5];
    scanf("%1d%1d%1d%1d%1d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    while (i<=4) {
        printf("[%d]\n", a[i]*j);
        j/=10;
        i++;
    }

    return 0;
}