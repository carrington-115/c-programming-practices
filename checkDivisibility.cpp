#include <stdio.h>

bool checkDivisibility(int number){
    if(number % 5 == 0 && number % 11 == 0){
        return true;
    }else{
        return false;
    }
}
int main(void){
    printf("Enter the two numbers that you want to check if they are divisible by 5 and 11\n\n");
    int num;
    scanf("%d", &num);
    bool result = checkDivisibility(num);
    if (result){
        printf("%d is divisible by 5 and 11", num);
    }else{
        printf("%d is not divisible by 5 and 11", num);
    }
}