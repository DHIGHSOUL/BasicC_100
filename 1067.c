#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // 굳이 중첩 해야됨?
    if(n<0) {
        printf("minus\n");
    } else {
        printf("plus\n");
    }

    if(n%2==0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    return 0;
}