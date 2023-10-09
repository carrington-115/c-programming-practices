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
    if (n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)
    }
}
// this function generates a fibonacci sequence from 1 to n
void fibonacciSequence(int n){
    int sequence[n], i = 1;
    // since every fibonacci starts with 1
    int number = 0;
    while (i<n){
        number = i
    }

}

int main(void){
    // computeThreeNumbers(1, 2, 3); ----> function worked correctly to find the sum and the average of the 3 nubmers
    // findDigitsSum();
    return 0;
}