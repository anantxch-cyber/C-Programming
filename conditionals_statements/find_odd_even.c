// Take positive integer input and tell if it is even or odd
// This program demonstrates the use of conditional statements in C to determine if a number is even or odd
#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n); // & is for storing value into memory address
    if( n % 2 == 0){ // if n is divisible by 2 then it is even
        printf("%d is an even number.\n",n);
    }
    else{ // if n is not divisible by 2 then it is odd
        printf("%d is an odd number.\n",n);
    }
    return 0;
}