#include <stdio.h>

int main(){

    char input, terminating_char, message[1024] = {0};
    int i = 0, j;

    printf("Enter a sentence: ");
    while((input = getchar()) != '.' && input != '!' && input != '?'){
        message[i++] = input;
    }
    terminating_char = input;

    printf("Reversal of sentence: ");

    while(i >= 0){
        while(message[--i] != ' ' && i != 0){
            ;
        }

        j = i == 0 ? 0 : i + 1;

        while(message[j] != ' ' && message[j] != '\0'){
            putchar(message[j++]);
        }

        if(i != 0)
            putchar(' ');
    }
    printf("\b%c\n", terminating_char);

    return 0;

}