#include <stdio.h>

int main(void){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    int *ptr_a = &a;
    int *ptr_b = &b;
    int sum = *ptr_a + *ptr_b;

    printf("\nThe sum of %d and %d is, %d", *ptr_a, *ptr_b, sum);
    return 0;
}