// Take integer input and print the absolute value of that integer
// absolute vlaue matlab ki agar positive number jaye toh positive hi aaye aur agar negative jaye toh uska positive value aaye
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n < 0) { // if n is less than 0 then it is a negative number
        n = n * (-1); // multiply n by -1 to get the absolute value of n
        printf("The absolute value of the number is %d\n",n); // print the absolute value of n
    }
    else{ // if n is greater than or equal to 0 then it is a positive number
        printf("The absolute value of the number is %d\n", n); // print the absolute value of n
    }
    return 0;
}
// Note: Absolute value of a number is the distance of that number from 0 on the number line. It is always positive or zero. For example, the absolute value of -5 is 5, and the absolute value of 5 is also 5.