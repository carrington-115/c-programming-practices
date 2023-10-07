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


int main(void){
    computeThreeNumbers(1, 2, 3);
    return 0;
}