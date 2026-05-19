// This program demonstrates the use of short data type in C
// Short data type is used to store small integer values. It typically takes 2 bytes of memory and can store values from -32,768 to 32,767.
#include<stdio.h>
int main(){
    short a = 32222;
    printf("The value of a is : %d\n",a); // %d is format specifier for int data type, but it can also be used for short data type as short is promoted to int when used in expressions
    return 0;
}
// range formula for short data type is : -2^(n-1) to 2^(n-1) - 1, where n is the number of bits used to store the data type. For short data type, n is 16, so the range is : -2^(16-1) to 2^(16-1) - 1 = -32,768 to 32,767.
