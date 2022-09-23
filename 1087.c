#include <stdio.h>

int main() {
    int n, result = 0, i = 0;
    scanf("%d", &n);
    while(++i) {
        result += i;
        if (result >= n) {
            printf("%d", result);
            break;
        }
    }

    return 0;
}