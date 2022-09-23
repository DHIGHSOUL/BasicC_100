#include <stdio.h>

int main() {
    int board[20][20]={}, n, x, y, i, j;
    for(i=1; i<20; i++) {
        for(j=1; j<20; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        for(j=1; j<20; j++) {
            board[x][j] = !board[x][j];
            board[j][y] = !board[j][y];
        }
    }

    for(int i=1; i<20; i++) {
        for(int j=1; j<20; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}