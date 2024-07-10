#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 64

int main(){

    char message[MAX_LENGTH] = {0}, input_char;
    int i = 0;

    printf("Please enter a message (maximum %d characters): ", MAX_LENGTH);
    while((input_char = getchar()) != '\n' && i <= MAX_LENGTH){
        message[i++] = input_char;
    }

    printf("In B1FF-speak: ");

    for(i = 0; i <= MAX_LENGTH; i++){
        switch(input_char = toupper(message[i])){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(input_char);
                break;
        }
        
    }

    printf("!!!!!!!!!!\n");

    return 0;

}