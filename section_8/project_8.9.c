#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 10

int main(){

    srand(time(NULL));

    char grid[GRID_SIZE][GRID_SIZE];
    int row = 0, col = 0, direction;
    char letter = 'A';

    for(row = 0; row < GRID_SIZE; row++){
        for(col = 0; col < GRID_SIZE; col++){
            grid[row][col] = '.';
        }
    }

    row = 0;
    col = 0;
    grid[row][col] = letter++;

    while(letter <= 'Z'){

        direction = rand() % 4;

        if(grid[row + 1][col] != '.' && grid[row - 1][col] != '.' && grid[row][col + 1] != '.' && grid[row][col - 1] != '.'){
            break;
        }

       switch(direction){
            case 0:
                if(col > 0 && grid[row][col - 1] == '.'){
                    grid[row][--col] = letter++;
                }
                break;
            case 1:
                if(row < 9 && grid[row + 1][col] == '.'){
                    grid[++row][col] = letter++;
                }
                break;
            case 2:
                if(col < 9 && grid[row][col + 1] == '.'){
                    grid[row][++col] = letter++;
                }
                break;
            case 3:
                if(row > 0 && grid[row - 1][col] == '.'){
                    grid[--row][col] = letter++;
                }
                break;
            default:
                break;
       }
        


    }
    for(row = 0; row < GRID_SIZE; row++){
        for(col = 0; col < GRID_SIZE; col++){
            putchar(grid[row][col]);
        }
        printf("\n");
        }

    printf("\n");
    return 0;

}