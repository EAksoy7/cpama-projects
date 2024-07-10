#include <stdio.h>
#include <stdbool.h>

int main(){

    int digit;
    long n;

    while(true){
        bool digit_seen[10] = {false};

        printf("Enter a number, enter 0 to terminate program: ");
        scanf("%ld", &n);
        if (n == 0){
            break;
        }

        while(n > 0){
            digit = n % 10;
            if(digit_seen[digit]){
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0){
            printf("Repeated Digit.\n");
        }
        else{
            printf("No Repeated Digits.\n");
        }
        
    }
    return 0;

}
