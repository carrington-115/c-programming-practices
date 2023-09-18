#include <stdio.h>

void checkLetter(char letter){
    if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){
        printf("\n%c is a letter of the alphabet", letter);
    }
    else if(letter >= 48 && letter <= 57){
        printf("\n%c is a number", letter);
    }
    else{
        printf("\n%c is not a special character", letter);
    }
}

void checkCase(char letter){
    if (letter >= 'a' && letter <= 'z'){
        printf("\n%c is a lower case alphabet\n", letter);
    }
    else if (letter >= 'A' && letter <= 'Z'){
        printf("\n%c is an upper case alphabet", letter);
    }
}

void checkIfVowel(char letter){
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        printf("\n%c is a vowel", letter);
        
    }
    else{
        printf("\n%c is not a vowel", letter);
        
    }
}

int main(void){
    printf("Enter a letter to check if its a letter or not\n");
    char letter;
    scanf("%c", &letter);
    // checking the letter
    checkLetter(letter);
    checkCase(letter);
    checkIfVowel(letter);
    return 0;
}