#include <stdio.h>

#define QUIZ_MAX_SCORE 100  

int main(){

    int total = 0, high_score = 0, low_score = QUIZ_MAX_SCORE, row, col, grid[5][5], entry;

    for(row = 0; row <= 4; row++){
        printf("Enter student %d quiz scores: ", row + 1);
        for(col = 0; col <= 4; col++){
            scanf("%d", &grid[row][col]);
        }
    }

    printf("\nTotal score and average score\n\n           Total: Average:\n");
    for(row = 0; row <= 4; row++){
        for(col = 0; col <= 4; col++){
            total += grid[row][col];
        }
        printf("Student %d: %-6d %d\n", row + 1, total, total/5);
        total = 0;
    }


    printf("\nAverage score, High score and Low score for each quiz\n\n        Average: High: Low:\n");
    for(col = 0; col <= 4; col++){
        for(row = 0; row <= 4; row++){
            entry = grid[row][col];

            total += entry;

            if(entry > high_score){
                high_score = entry;
            }
            if(entry < low_score){
                low_score = entry;
            }

        }
        printf("Quiz %d: %-8d %-8d %d\n", col + 1, total/5, high_score, low_score);
        total = 0;
    }
    printf("\n");

    return 0;

}