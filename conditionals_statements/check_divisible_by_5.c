// Take positive integer input and tell if it is divisible by 5
// This program demonstrates the use of conditional statements in C to determine if a number is divisible by 5
#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if( n % 5 == 0){ // if n is divisible by 5 then it is divisible by 5
        printf("%d is divisible by 5.\n",n);
    }
    else{ // if n is not divisible by 5 then it is not divisible by 5
        printf("%d is not divisible by 5.\n",n);
    }
}