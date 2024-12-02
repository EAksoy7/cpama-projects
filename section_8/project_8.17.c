/*
E.N.C. Aksoy, 2024

My solution to C Programming a Modern Approach section 8 project 17
A program to print a magic square of a size specified by user input
*/

#include <stdio.h>

int main(){

    int n, i, row_index, col_index, square[99][99];

    printf("This program creates a magic square of specified size.\n");
    printf("The size must be an odd number between 1-99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("Input must be an odd number.\n");
        return 1;
    }

    for(row_index = 0; row_index < n; row_index++){
        for(col_index = 0; col_index < n; col_index++){
            square[row_index][col_index] = 0;
        }
    }

    row_index = 0;
    col_index = n / 2;

    square[row_index][col_index] = 1;

    for(i = 2; i <= n*n; i++){

        row_index = row_index - 1 % n;

        row_index = row_index < 0 ? row_index + n : row_index;

        col_index = (col_index + 1) % n;

        if (square[row_index][col_index] != 0){
            col_index = col_index - 1 % n;

            col_index = col_index < 0 ? col_index + n : col_index;

            row_index = (row_index + 2) % n;
        }

        square[row_index][col_index] = i;

    }

    for(row_index = 0; row_index < n; row_index++){
        for(col_index = 0; col_index < n; col_index++){
            printf("%3d", square[row_index][col_index]);
        }
        printf("\n");
    }

    return 0;

}