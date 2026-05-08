// PROGRAMMING SUM OF 2 GIVEN NUMBERS
#include<stdio.h>
int main(){

    int x;
    printf("Enter the first number :");
    scanf("%d",&x); // & is for storing value into memory address

    int y;
    printf("Enter the second number :");
    scanf("%d",&y); // & is for storing value into memory address

    int sum = x + y;
    printf("The sum of %d and %d is : %d\n",x,y,sum); // yaha %d is used for printing integer value and %d ke baad jitna bhi comma se separated variable hoga utna hi %d use karna hoga

    return 0;
}
