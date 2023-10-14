#include <stdio.h>
#include <math.h>

int main(void){
    int number;
    printf("Enter a 3-digit number you want to check it's an armstrong number:\t");
    scanf("%d", &number);
    printf("\nEnter the individual digits of the number:\t");
    int a, b, c;
    int check, length = 3;
    bool checkArmstrong = false;
    scanf("%d%d%d", &a, &b, &c);
    check = pow(a, length) + pow(b, length) + pow(c, length);
    printf("\nThe sum check is: %d", check);
    if (check == number){
        checkArmstrong = true;
    }

    switch (checkArmstrong)
    {
    case true:
        {
            printf("\nThe number you entered is an armstrong number");
            break;
        }
    
    case false:
        {
            printf("\nThe number you entered is not armstrong number");
            break;
        }
    
    default:
        break;
    }
    return 0;
}