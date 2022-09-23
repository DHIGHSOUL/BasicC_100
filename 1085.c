#include <stdio.h>

int main() {
    double h = 0, b = 0, c = 0, s = 0;
    scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
    double musicSize = (h*b*c*s)/8388608;

    printf("%.1lf MB", musicSize);

    return 0;
}