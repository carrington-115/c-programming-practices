#include <stdio.h>


void usingSimpleArrays(){
    // method 1 in creating an array;
    int numbers[5]; // declaring an array without initialising the values of the array
    
    // filling the array using while loops

    for (int i = 0; i<5; i++){
        numbers[i] = i+1;
    }
    printf("This is the print test of the array\n");
    for (int i = 0; i<5; i++){
        printf("%d\t", i);
    }
}

int main(void){
    usingSimpleArrays();
    return 0;   
}