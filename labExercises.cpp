#include <stdio.h>
#include <math.h>

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

void checkArmStrongNumber(int length, int checkNumber){
    // the length variable is the numbers of digits that are in the number
    int number[length];
    int initial = checkNumber;
    for (int i = 0; i < length; i++){
        int value;
        printf("\nEnter the %d digit:\t", i+1);
        scanf("%d", &value);
        number[i] = value;
    }

    printf("That means you want to check if ");
    for (int i=0; i<length; i++){
        printf("%d", number[i]);
    }
    printf(" is an armstrong number. \nEnter 1 (yes) or 0 (no) to confirm if you want to continue");
    int response;
    printf("\nEnter your response to continue:\t");
    scanf("%d", &response);

    switch (response){
        case 1:
            {int checkSum = 0;
            for (int i = 0; i < length; i++){
                checkSum = checkSum + pow(number[i], length);
            }
            if (checkSum == initial){
                printf("\nThe number you entered is an Armstrong number");
            }else{
                printf("\nThe number you entered is not an Armstrong number");
            }
            break;
            }
        
        default:
            printf("\n\nAn error happened; Rerun the program or check your code");
            break;
    }
                
}

bool identifyPrimeNumbers(int num){
    int i=1;
    bool checkPrime;
    while(i<=num){
        if((i != 1) && (i != num)){
            if((num % i) == 0){
                checkPrime = false;
                break;
            }
        }else{
            checkPrime = true;
        }
        i++;
    }
    return checkPrime;
}

void generatePrimeNumbers(int n){
    // verifying that a prime number is a number that can only divide 1 and itself
    // identifyPrimeNumbers(int n); ==> We use this function to check if the number is a prime number
    printf("The prime numbers of 1 to %d are: \t", n);
    int i = 1;
    while(i <= n){
        bool checkIfPrime = identifyPrimeNumbers(i);
        if(checkIfPrime == true){
            printf("%d, ", i);
        }
        i++;
    }
}


int main(void){
    // computeThreeNumbers(1, 2, 3); ----> function worked correctly to find the sum and the average of the 3 nubmers
    // findDigitsSum(); // this is the program to find all the sum of the digits in a number
    // fibonacciSequence(length);
    // checkArmStrongNumber(length, number);
    printf("This program generates prime numbers for the number you entered from 1 to the number");
    printf("\nEnter the maximum number:\t");
    int number;
    scanf("%d", &number);
    generatePrimeNumbers(number);
    return 0;
}