#include <stdio.h>

int main(){

    int total = 0, row, col, grid[5][5];

    for(row = 0; row <= 4; row++){
        printf("Enter row %d: ", row + 1);
        for(col = 0; col <= 4; col++){
            scanf("%d", &grid[row][col]);
        }
    }

    printf("Row totals: ");
    for(row = 0; row <= 4; row++){
        for(col = 0; col <= 4; col++){
            total += grid[row][col];
        }
        printf("%d ", total);
        total = 0;
    }
    printf("\n");

    printf("Col totals: ");
    for(col = 0; col <= 4; col++){
        for(row = 0; row <= 4; row++){
            total += grid[row][col];
        }
        printf("%d ", total);
        total = 0;
    }
    printf("\n");

    return 0;

}