#include <stdio.h>

int main() {
    int h, w, n, l, d, x, y, i, j;
    scanf("%d %d", &h, &w);
    int board[h+1][w+1];
    for(i=0; i<=h; i++) {
        for(j=0; j<=w; j++) {
            board[i][j] = 0;
        }
    }

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d==0) {
            for(j=0; j<l; j++) {
                board[x][y+j] = 1;
            }
        } else if(d==1) {
            for(j=0; j<l; j++) {
                board[x+j][y] = 1;
            }
        }
    }

    for(i=1; i<=h; i++) {
        for(j=1; j<=w; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}