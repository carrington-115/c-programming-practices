#include <stdio.h>
#include <math.h>

// a program that checks if a number is a perfect square
bool checkIfNumberPerfectSquare(float number, float result){
    printf("\nThe square root of the number is: \t%f", result);
    if(result == number){
        return true;
    }else{
        return false;
    }

}
int main(void){
    printf("Enter the number you want to check it is a perfect square of another number:\t\t");
    float number, result;
    scanf("%f", &number);
    result = sqrt(number);
    bool getResult = checkIfNumberPerfectSquare(number, result);
    if (getResult == true){
        printf("\nThe number is a perfect square");
    }else{
        printf("\nThe number is not a perfect square");
    }
    return 0;
}