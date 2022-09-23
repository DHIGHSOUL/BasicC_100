#include <stdio.h>

int main() {
    double w, h ,b;
    scanf("%lf %lf %lf", &w, &h, &b);
    printf("%.2lf MB", (w*h*b)/8388608);

    return 0;
}