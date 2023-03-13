#include <stdio.h>
#include <string.h>

int main(void){
    int ascii; //Convert to ascii to check if it's a letter
    int wordCount = 0;
    char inputChar = '\0';
    char currWord[20] = "";
    char* words[20] = {"","",""};

    while(scanf("%c", &inputChar) != EOF){
        ascii = inputChar;
        if((64<ascii && ascii<91) || (96<ascii && ascii<123)){
            strncat(currWord, &inputChar, 1);
            //printf("%s", currWord);
        }
        else if(ascii == 32){
            words[wordCount] = currWord;
            //strcpy(words[wordCount], currWord);
            printf("%s\n", words[wordCount]);
            wordCount++;
            strcpy(currWord, "");
        }
    }
    //printf("%s", currWord);
    printf("%s", words[0]);
}