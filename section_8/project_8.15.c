/*
E.N.C. Aksoy, 2024

My solution to C Programming a Modern Approach section 8 project 15
A program to implement a simple caesar cipher
*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char input_message[80], chr;
    int n, i = 0, char_index;

    printf("Enter a message to be encrypted: ");
    while ((chr = getchar()) != '\n'){
        input_message[i++] = chr;
    }

    printf("Enter shift ammount (1-25): ");
    scanf("%d", &n);

    for (char_index = 0; char_index <= i; char_index++){

        chr = input_message[char_index];

        if (isalpha(chr)){

            if (isupper(chr)){
                putchar((((chr - 'A') + n) % 26 + 'A'));
            }
            else{
                putchar((((chr - 'a') + n) % 26 + 'a'));
            }

        }
        else{
            putchar(chr);
        }

    }
    putchar('\n');
    return 0

}