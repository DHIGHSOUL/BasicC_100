#include <stdio.h>

int main() {
    char x, f = 'a';
    scanf("%c", &x);
    while(f<=x) {
        printf("%c ", f++);
    }

    return 0;
}