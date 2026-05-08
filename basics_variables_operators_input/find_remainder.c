// Take two integers input, a and b: a>b, and find the remainder when a is divided by b. And print the reminder.
// formula is : Dividend = Divisor × Quotient + Remainder
#include<stdio.h>
int main(){
    int a;
    printf("Enternthe value of a :\n");
    scanf("%d",&a); // & is for storing value into memory address

    int b;
    printf("Enter the value of b :\n");
    scanf("%d",&b); // & is for storing value into memory address

    int quotient = a / b; // a > b , // Quotient = Dividend / Divisor 
    int remainder = a - (b * quotient); // Remainder = Dividend - (Divisor × Quotient)
    printf("The remainder when %d is divided by %d is : %d\n",a,b,remainder);
    return 0;   

}