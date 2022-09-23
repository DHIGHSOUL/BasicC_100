#include <stdio.h>

int main() {
    int n, result = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        result += i;
        if(result>=n) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}