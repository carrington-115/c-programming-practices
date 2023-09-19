// this program is all about date programming
#include <stdio.h>

int getDaysOfMonth(int month, int year){

    int monthDays;
    bool thirtyDay;

    // checking if the month is a 30 day month
    if (month == 4 || month == 6 || month == 9 || month == 11){
        thirtyDay = true;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        thirtyDay = false;
    }

    if (year % 4 == 0){
        switch(thirtyDay){
            case true:
                printf("\nThis should be a 30-day month");
                monthDays = 30;
                break;
            case false:
                printf("\nThis should be a 31-day month");
                monthDays = 31;
                break;
            default:
                printf("\nThis month should be February. \nSince it is a leap year, the month has 29 days");
                monthDays = 29;
                break;
        }
    }else{
        switch(thirtyDay){
            case true:
                printf("\nThis should be a 30-day month");
                monthDays = 30;
                break;
            case false:
                printf("\nThis should be a 31-day month");
                monthDays = 31;
                break;
            default:
                printf("\nThis month should be February. \nSince it's not a leap year, the month has 28 days");
                monthDays = 28;
                break;
        }
    }
    
    
    
    return monthDays;
}
int main(void){
    int month, year;
    printf("Welcome to this program. All you just need to do is to enter the month and year \n \t and the computer will tell you the number of days in the month");
    printf("\n\nEnter the month: \t");
    scanf("%d", &month);
    printf("\nEnter the year: \t");
    scanf("%d", &year);

    int days = getDaysOfMonth(month, year);
    switch(month){
        case 1:
            printf("\nJanuary has %d days in %d year", days, year);
        case 2:
            printf("\nFebruary has %d days in %d year", days, year);
        case 3:
            printf("\nMarch has %d days in %d year", days, year);
        case 4:
            printf("\nApril has %d days in %d year", days, year);
        case 5:
            printf("\nMay has %d days in %d year", days, year);
        case 6:
            printf("\nJune has %d days in %d year", days, year);
        case 7:
            printf("\nJanuary has %d days in %d year", days, year);
        case 8:
            printf("\nJanuary has %d days in %d year", days, year);
        case 9:
            printf("\nJanuary has %d days in %d year", days, year);
        case 10:
            printf("\nJanuary has %d days in %d year", days, year);
        case 11:
            printf("\nJanuary has %d days in %d year", days, year);
        case 12:
            printf("\nJanuary has %d days in %d year", days, year);
        default:
            printf("\nAn Error occured, Run the program again");
    }
    return 0;
}