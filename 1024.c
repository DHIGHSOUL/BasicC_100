#include <stdio.h>

int main() {
    char d[30];
    int i = 0;
    scanf("%s", d);
    while (d[i] != '\0') {
        printf("%c\n", d[i++]);
    }

    return 0;
}