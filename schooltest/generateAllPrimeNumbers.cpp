#include <stdio.h>

bool identifyPrimeNumbers(int number){
    int i=1;
    bool checkPrime = true;
    while (i<=number){
        if (i!=1 && i!=number){
            if((number%i) == 0){
                checkPrime = false;
                break;
            }
        }
        i++;
    }
    return checkPrime;
}


void generatePrime(int number){
    int i = 1;
    bool checkIfPrimeNumber;
    printf("The list of Prime numbers from %d to %d are: ", i, number);
    while (i<=number){
        checkIfPrimeNumber = identifyPrimeNumbers(i);
        if(checkIfPrimeNumber == true){
            printf("%d, ", i);
        }
        i++;
    }
}


int main(void){
    printf("Enter the number you want to generate it's prime numbers:\t");
    int number;
    scanf("%d", &number);
    generatePrime(number);

    return 0;
}