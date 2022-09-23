#include <stdio.h>

int main() {
    char x = 'a';
    while(1) {
        scanf("%c", &x);
        printf("%c\n", x);
        getchar();
        if (x=='q') break;
    }

    return 0;
}