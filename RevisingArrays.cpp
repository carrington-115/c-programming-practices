#include <stdio.h>


void usingSimpleArrays(){
    // method 1 in creating an array;
    int numbers[5]; // declaring an array without initialising the values of the array
    
    // int numbers[5] = {1, 2, 3, 4, 5}; // this way we use to declare and intialize the array.
    // filling the array using while loops
    
    // we fill the array by traversing through it
    for (int i = 0; i<5; i++){
        numbers[i] = i+1;
    }
    // we access all the elements of the array by traversing it
    printf("This is the print test of the array\n");
    for (int i = 0; i<5; i++){
        printf("%d\t", i);
    }
}

// this function shows how to use 2 and 3 dimensional arrays
void usingTwoDimensionalArrays(){
    int matrixOne[2][2]; // we declare the array by using this method

    // we fill the array by transversing it
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            matrixOne[i][j] = j+1;
        }
    }

    // print the matrix by transversing it still

    for (int i = 0; i<2; i++){
        printf("\nRow %d:\t", i+1);
        for (int j=0; j<2; j++){
            printf("%d\t", j+1);
        }
    }
}

int main(void){
    // usingSimpleArrays();
    usingTwoDimensionalArrays();
    return 0;   
}