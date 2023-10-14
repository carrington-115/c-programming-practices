#include <stdio.h>

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
    printf("Enter the number that you want to print its prime numbers from 1 to n:\t");
    int number;
    scanf("%d", &number);
    generatePrimeNumbers(number);
    return 0;
}