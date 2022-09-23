#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    reload:
    scanf("%d", &m);
    printf("%d\n", m);
    if(n-->1) goto reload;

    return 0;
}