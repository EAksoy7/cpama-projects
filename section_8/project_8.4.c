#include <stdio.h>

#define SIZE (int) (sizeof(a) / sizeof(a[0]))

int main(void){

    int a[10], i;
    printf("Enter %d numbers: ", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for(i = SIZE; i > 0; i--){

        printf("%d ", i);

    }
    printf("\n");
    
    return 0;
}