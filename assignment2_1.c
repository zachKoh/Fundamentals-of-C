#include <stdio.h>

//Run length encoding of ASCII art
int main(void){
    char option, inputChar;
    scanf("%c", &option);

    if(option == 'C'){

        char currChar = '\0';
        int inARow = 1;
        while(scanf("%c", &inputChar) != EOF){
            if(inputChar == currChar){
                inARow++;
                if(inARow < 4){
                    printf("%c", currChar);
                }
            }
            else{
                if(inARow > 2){
                    printf("%i*", inARow);
                }
                printf("%c",inputChar);
                currChar = inputChar;
                inARow = 1;
            }
        }

    }
    else if(option == 'E'){
        int intValue, digitsInNo, checkForDigitsVal;
        char checkForDigits; 
        char currChar = '\0'; //To keep track which char to repeat
        while(scanf("%c", &inputChar) != EOF){
            intValue = ((int) inputChar) - 48;

            //Check if the char is a number
            if(intValue<10 && intValue>0){
                int noOfRepeats = 0;
                scanf("%c", &checkForDigits);
                checkForDigitsVal = ((int) checkForDigits) - 48;

                //Check if it's a double digit number by checking the next char
                if(checkForDigitsVal<10 && checkForDigitsVal>=0){
                    noOfRepeats = ((intValue*10) + checkForDigitsVal)-3;
                    printf("%i", noOfRepeats);
                    for(int i = 0; i<noOfRepeats ;i++){
                        printf("%c", currChar);
                    }
                }
                else{
                    noOfRepeats = intValue - 3;
                    for(int i = 0; i<noOfRepeats ;i++){
                        printf("%c", currChar);
                    }
                }
            }
            else{
                currChar = inputChar;
                printf("%c", inputChar);
            }
        }


    }
    return 0;
}