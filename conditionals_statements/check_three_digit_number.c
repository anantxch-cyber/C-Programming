// Check if a number is a three-digit number by using &&(and) operator and ||(or) operator
// A three-digit number is a number that has three digits, i.e., it is between 100 and 999 (inclusive).
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if( n > 99 && n < 1000){ // if n is greater than 99 and less than 1000 then it is a three-digit number
        printf("%d is a three-digit number.",n); // print that n is a three-digit number
    }
    else{ // if n is not greater than 99 and less than 1000 then it is not a three-digit number
        printf("%d is not a three-digit number.",n); // print that n is not a three-digit number
    }
    return 0;
}
// Note: The && operator is used to check if both conditions (n > 99 and n < 1000) are true, which means n is a three-digit number. If either condition is false, the else block will execute, indicating that n is not a three-digit number.