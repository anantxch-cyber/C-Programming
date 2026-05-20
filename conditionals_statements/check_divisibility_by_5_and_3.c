// Check if a number is divisible by both 5 and 3
// A number is divisible by both 5 and 3 if it is divisible by 15, since 15 is the least common multiple of 5 and 3.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n % 5 == 0 && n % 3 == 0){ // if n is divisible by both 5 and 3 then it is divisible by 15
        printf("%d is divisible by both 5 and 3.\n",n); // print that n is divisible by both 5 and 3
    }
    else{ // if n is not divisible by both 5 and 3 then it is not divisible by 15
        printf("%d is not divisible by both 5 and 3.\n",n); // print that n is not divisible by both 5 and 3
    }
        return 0;
}
// Note: The condition n % 5 == 0 checks if n is divisible by 5, and n % 3 == 0 checks if n is divisible by 3. Using the logical AND operator (&&) ensures that both conditions must be true for the overall condition to be true, which means n must be divisible by both 5 and 3. 