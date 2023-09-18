#include <stdio.h>

// this program finds the maximum between 2 numbers that are entered by the user
int main(void){
    printf("Enter two numbers to know the maximum and minimum number\n\n");
    printf("Enter the two numbers: \t");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("\nYou entered %d and %d", a, b);
    if (a > b){
        printf("\n%d is bigger than %d", a, b);
    }
    else if (b > a){
        printf("\n%d is bigger than %d", b, a);
    }
    return 0;
}