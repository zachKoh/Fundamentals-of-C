#include <stdio.h>

//Run length encoding of ASCII art
int main(void){
    char option, character;
    scanf("%c", &option);

    if(option == 'C'){

        char currChar = '\0';
        int inARow = 1;
        while(scanf("%c", &character) != EOF){
            if(character == currChar){
                inARow++;
                if(inARow < 4){
                    printf("%c", currChar);
                }
            }
            else{
                if(inARow > 2){
                    printf("%i*", inARow);
                }
                printf("%c",character);
                currChar = character;
                inARow = 1;
            }
        }

    }
    else if(option == 'E'){
            printf("Expanding\n");

    }
    return 0;
}