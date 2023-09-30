#include <stdio.h>

int main(void){
    printf("This is a program where we enter the marks of 5 subjects and computer \ngives use the grades of the subjects\n");
    int subjectMarks[] = {0, 0, 0, 0, 0}, i;
    for (i=0; i<5; i++){
        int subject;
        printf("\nEnter the marks of subject %d: \t\t\t", i+1);
        scanf("%d", &subject);
        subjectMarks[i] = subject;
    }
    for (i=0; i<5; i++){
        int subject = subjectMarks[i];
        printf("\nThe mark of subject %d is %d", i+1, subject);
    }
    printf("\nHere are your grades\n\n");
    for (i=0; i<5; i++){
        int subject = subjectMarks[i];
        if (subject >= 90){
            printf("\nThe grade of subject %d is: A", i+1);
        }
        else if ((subject >= 80) && (subject < 90)){
            printf("\nThe grade of subject %d is: B", i+1);
        }
        else if ((subject >= 70) && (subject < 80)){
            printf("\nThe grade of subject %d is: C", i+1);
        }
        else if ((subject >= 60) && (subject < 70)){
            printf("\nThe grade of subject %d is: D", i+1);
        }
        else if ((subject >= 40) && (subject < 60)){
            printf("\nThe grade of subject %d is: D", i+1);
        }
        else{
            printf("\nThe grade of subject %d is: E", i+1);
        }
    return 0;
}