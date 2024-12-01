/*
E.N.C. Aksoy, 2024

My solution to C Programming a Modern Approach section 8 project 16
A program to check if two words are anagrams of eachother
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int count_list[26] = {0}, chr;
    char i;

    printf("Enter first word: ");
    while ((chr = getchar()) != '\n'){
        if (isalpha(chr)){
            chr = tolower(chr);
            count_list[chr - 'a'] += 1;
        }
    }

    printf("Enter second word:");
    while ((chr = getchar()) != '\n'){
        if (isalpha(chr)){
            chr = tolower(chr);
            count_list[chr - 'a'] -= 1;
        }
    }

    for (i = 0; i < 26; i++){
        if (count_list[i] != 0){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");
    return 0;

}