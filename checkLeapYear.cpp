#include <stdio.h>
bool checkLeapYear(int year){
    if (year % 4 == 0){
        printf("%d is a leap year\n", year);
        return true;
    }else{
        printf("%d is not a leap year\n", year);
        return false;
    }
}

int main(void){
    printf("Enter the year you want to check if its a leap year or not\n");
    int year;
    scanf("%d", &year);
    bool result = checkLeapYear(year);

}