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
    int matrixOne[2][2]; // we declare the array by using this method....
    // we fill the array by transversing it
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            matrixOne[i][j] = j+1;
        }
    }

    // print the matrix by transversing it still....
    for (int i = 0; i<2; i++){
        printf("\nRow %d:\t", i+1);
        for (int j=0; j<2; j++){
            printf("%d\t", j+1);
        }
    }
}

void usingThreeDimensionalArrays(){
    int matrixTwo[2][2][2]; // declaring the 3X3 matrix...
    // we will be using i, j, and k
    for (int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            for (int k = 0; k<2; k++){
                matrixTwo[i][j][k] = k+1;
            }
        }
    }

    // print the matrix values
    for (int i = 0; i<2; i++){
        printf("\n\nThis is the %d matrix", i+1);
        for(int j = 0; j<2; j++){
            printf("\n");
            for (int k = 0; k<2; k++){
                printf("%d\t", k+1);
            }
        }
    }
}


// using pointers and arrays
void usingPointersAndArray(){
    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = &numbers[0];
    /*
        The print statement below shows that the address of the name of the array and first element of the 
        array are the same. This means that both values are stored in the same address.

        %u --> prints the address in hexadecimal number
        %p --> prints the address in decimal number
    */
    printf("The address of the array name: %u\n The address of the first element of the array: %u", numbers, &numbers[0]);

    // printing the values of the 

}

int main(void){
    // usingSimpleArrays();
    // usingTwoDimensionalArrays();
    // usingThreeDimensionalArrays();
    usingPointersAndArray();
    return 0;   
}