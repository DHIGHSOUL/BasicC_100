#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    while(i++!=n) {
        if(i%3!=0) {
            printf("%d ", i);
        } else {
            continue;
        }
    }

    return 0;
}