// Find the greatest of three three-digit numbers
#include<stdio.h>
int main(){
    int a;
    printf("Enter the first three digit number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the second three digit number : ");
    scanf("%d",&b);
    int c;
    printf("Enter the third three digit number : ");
    scanf("%d",&c);
    if(a > b && a > c){ // if a is greater than b and c then a is the greatest number
        printf("%d is the greatest number.\n",a); // print that a is the greatest number
    }
    if(b > a && b > c){ // if b is greater than a and c then b is the greatest number
        printf("%d is the greatest number.\n",b); // print that b is the greatest number
    }
    if(c > a && c > b){ // if c is greater than a and b then c is the greatest number
        printf("%d is the greatest number.\n",c); // print that c is the greatest number
    }
    return 0;
}
// Note: The program takes three three-digit numbers as input and uses conditional statements to compare them. The greatest number among the three is determined by checking if one number is greater than the other two. If a number is greater than both of the others, it is printed as the greatest number.