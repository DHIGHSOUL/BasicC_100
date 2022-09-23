#include <stdio.h>

int main() {
    int a[3], b = 0;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    while(b<3) {
        if(a[b]%2 == 0) {
            printf("%d\n", a[b]);
        }
        b++;
    }

    return 0;
}