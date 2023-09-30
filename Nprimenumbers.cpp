#include <stdio.h>

bool identifyPrimeNumbers(int num){
    int i=1;
    bool checkPrime = false;
    while(i<=num){
        if((i != 1) && (i != num)){
            if((num % i) == 0){
                checkPrime = true;
                break;
            }
        }else{
            checkPrime = false;
        }
        i++;
    }
    return checkPrime;
}
int* generatePrimeNumbers(int length){
    int* primeList[] = {};
    int i=1;
    while (i<=length){
        bool prime = identifyPrimeNumbers(i);
        if (prime == true){
            primeList[i] = i;
        }
    }
    return primeList;
}

int main(void){
    printf("This program is to find the list of prime numbers between 1 and n, where end is the final number \n");
    printf("Enter the final number: \t");
    int number;
    scanf("%d", &number);
    int* primeNumbers = generatePrimeNumbers(number);
    printf("\nHere is the list of prime numbers from 1 to %d", number);
    int i = 0;
    while (i < number){
        num = primeNumbers[i];
        if(num != NULL){
            printf("\t%d");
        }
        else{
            printf("\nThere is an error somewhere else there are no primes numbers");
        }
    }
    return 0;
}