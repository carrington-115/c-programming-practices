#include <stdio.h>

// this file contains all the solutions of the lab exercises

// the first function is to sum 3 numbers and find their averages

void computeThreeNumbers(float a, float b, float c){
    float sum, average;
    sum = a+b+c;
    average = sum/3;
    printf("\nThe sum of %f, %f, and %f is: %f", a, b, c, sum);
    printf("\nThe average of %f, %f, and %f is: %f", a, b, c, average);
}

void findDigitsSum(){
    printf("how many digits does the number have: \t");
    int numberLength;
    scanf("%d", &numberLength);
    int numberDigits[numberLength];
    for (int i = 0; i<numberLength; i++){
        int digit = 0;
        printf("\nEnter the %d digit of the number:\t", i+1);
        scanf("%d", &digit);
        numberDigits[i] = digit;
    }
    printf("\n\nThis is the nubmer you entered:\t\t");
    for (int i = 0; i<numberLength; i++){
        printf("%d", numberDigits[i]);
    }

    int sum = 0, i = 0;
    while (i<numberLength){
        sum = sum + numberDigits[i];
        i++;
    }

    printf("\n\nThe sum of the digits is: %d", sum);
}

int fibonacci(int n){
    int value;
    if (n==1){
        value = 1;
        return value;
    }
    else{
        value = n-1;
        return value;
    }
}
// this function generates a fibonacci sequence from 1 to n
void fibonacciSequence(int n){
    int sequence[n]; 
    int i = n;
    // since every fibonacci starts with 1
    int number = 0, j = 0;
    while (j < n){
        number = fibonacci(i);
        sequence[j] = number;
        i = number;  // this is a non-tail recursion algorithm
        j++;
    }

    printf("\nThis is the fibonacci sequence of %d elements: ", n);
    for (int i = n-1; i >= 0; i--){
        printf("\t%d,\t", sequence[i]);
    }

}

int main(void){
    // computeThreeNumbers(1, 2, 3); ----> function worked correctly to find the sum and the average of the 3 nubmers
    // findDigitsSum(); // this is the program to find all the sum of the digits in a number
    printf("\nHow many elements do you want in the fibonacci sequence: \t");
    int length;
    scanf("%d", &length);
    fibonacciSequence(length);
    return 0;
}