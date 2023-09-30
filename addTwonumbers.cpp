#include <stdio.h>

int addNumbers(int a, int b){
    int result = a + b;
    return result;
}
int main(void){
    int a, b;
    printf("This program is to add 2 numbers \n");
    printf("Enter number 1: \t");
    scanf("%d", &a);
    printf("\nEnter number 2: \t");
    scanf("%d", &b);
    int result = addNumbers(a, b);
    printf("\nThe addition of %d and %d is %d", a, b, result);
    return 0;
}