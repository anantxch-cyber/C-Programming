// LEARNING FOR PRINTING DECIMAL VALUE'S
// 5/2 - integer - 2
// 5.0/2 - one float and one integer - 2.5 ; 5/2.0 - same on float and one integer - 2.5
// %2f is used for printing only two decimal value's and to add more just replace 2 with 3 and 4 and so on if required
#include<stdio.h>
int main(){ 
    float x = 5;
    float y = 2;

    printf("ADDITION = %.2f\n",x+y);
    printf("SUBSTRACTION = %.2f\n",x-y);
    printf("MULTIPLICATION = %.2f\n",x*y);
    printf("DIVISION = %.2f\n",x/y);
    
    return 0;
}
