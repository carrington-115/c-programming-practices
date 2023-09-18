#include <stdio.h>
bool checkEven(int number){
    if (number % 2 == 0){
        printf("%d is even\n", number);
        return true;
    }else{
        printf("%d is odd\n", number);

        return false;
    }
}

int main(void){
    printf("Enter the number you want to check whether its odd or even\n");
    int num;
    scanf("%d", &num);
    bool result = checkEven(num);

}