// PRINT PERCENTAGE OF 4 SUBJECTS WHOSE MARKS ARE OUT OF 40
#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4;
    float total,percentage;

    printf("Enter marks of 4 subjects (out of 40):\n");
    scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4); // & is for storing value into memory address

    total = sub1 + sub2 + sub3 + sub4;
    percentage = (total / 160) * 100;

    printf("Total marks obtained : %.2f\n",total);
    printf("The percentage is : %.2f%%\n",percentage); // %% is used for printing percentage symbol
    return 0;
}