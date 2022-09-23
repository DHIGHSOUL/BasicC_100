#include <stdio.h>

int main() {
    int board[20][20]={}, n, x, y;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        if(board[x][y]==1) {
            continue;
        }
        board[x][y]++;
    }

    for(int i=1; i<20; i++) {
        for(int j=1; j<20; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}