#include <stdio.h>

bool identifyPrimeNumbers(int num){
    int i=1;
    bool checkPrime = true;
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

int main(void){
    int number;
    printf("Enter the number you want to check if it's a prime number \n");
    scanf("%d", &number);
    bool prime = identifyPrimeNumbers(number);
    if (prime == true){
        printf("\n%d is a prime number", number);
    }else{
        printf("\n%d is not a prime number", number);
    }
    return 0;
}