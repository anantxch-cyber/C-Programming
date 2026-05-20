// Take a year as input and tell if it is a leap year or not
// This program demonstrates the use of conditional statements in C to determine if a year is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter an year : ");
    scanf("%d",&year);
    if( year % 4 == 0){ // if year is divisible by 4 then it is a leap year
        printf("%d is a leap year.\n",year);
    }
    else{ // if year is not divisible by 4 then it is not a leap year
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}
// Remember that a leap year is a year that is divisible by 4, but if it is divisible by 100, then it is not a leap year unless it is also divisible by 400.

// Real leap year logic:
//
// 1. If the year is divisible by 4,
//    then it can be a leap year.
//
// 2. But if the year is divisible by 100,
//    then it is NOT a leap year.
//
// 3. Exception:
//    If the year is divisible by 400,
//    then it IS a leap year.
//
// Examples:
// 2004 -> Leap Year
// 1900 -> Not a Leap Year
// 2000 -> Leap Year