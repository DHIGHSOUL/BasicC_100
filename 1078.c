#include <stdio.h>

int main() {
    int sum = 0, nowInt = 0;
    scanf("%d", &nowInt);
    for(int i=0; i<=nowInt; i++) {
        if(i%2==0) {
            sum+=i;
        }
    }
    printf("%d", sum);

    return 0;
}