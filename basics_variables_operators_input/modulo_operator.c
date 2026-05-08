// programming with c : modulo operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a :\n");
    scanf("%d",&a); // & is for storing value into memory address

    int b;
    printf("Enter the value of b :\n");
    scanf("%d",&b); // & is for storing value into memory address

    int remainder = a % b; // Modulo operator (%) returns the remainder after division,If a < b, quotient becomes 0 and remainder is the number itself.
    printf("The remainder when %d is divided by %d is : %d\n",a,b,remainder);
    return 0;
}